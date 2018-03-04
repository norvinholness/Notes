#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;



int binarySearch (vector<int> v, int key ){
    int first = 0;
    int last = v.size() - 1;
    while (first <= last){
        int mid =  (first + last)/2;
        if (key > v[mid]){
            first = mid + 1;
        } else if (key < v[mid]) {
            last = mid - 1;
        } else {
            return mid;
        }

    }
    return -(first+1);
}

int main()
{

    vector<int> numbers;
    srand (unsigned (time(0)));
    for (int i = 0; i < 50; ++i){
        numbers.push_back((rand() % 100) +1);
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); ++i){
        cout << numbers[i] << " ";
    }

    cout <<endl;

    int key;
    cout << "Enter a number to search for: ";
    cin >> key;
    int retValue = binarySearch(numbers,key);

    if (retValue > -1){
        cout << "Found number at: " <<retValue + 1<<endl;
    } else{
        cout << "Number not found.";
    }

    return 0;
}
 