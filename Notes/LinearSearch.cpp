#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int linearSearch (int arr[], int Size, int key){

    for (int i = 0;  i < Size; ++i){
        if (key == arr[i]){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    const int MAX = 20;
    int numbers[MAX];

    srand((unsigned) time(0));

    for (int i = 0; i < MAX; ++i){
        numbers[i] = (rand() % 100) + 1;
        cout << numbers[i] << " ";
    }

    cout <<endl;

    int key;
    cout << "Enter a key to search for: ";
    cin >> key;
    int retValue = linearSearch(numbers, MAX, key);
    if (retValue >= 0){
        cout << "Key found at position " <<retValue <<endl;
    } else {
        cout << "Key not found ";
    }


    return 0;
}
