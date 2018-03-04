#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;
void display (int arr[], int size){
    for (int i =0; i < size; ++i ){
        cout << arr[i] << " ";
     }
}

void SelectionSort(int arr[], int size){
    int first;
    for (int i = size -1; i > 0; --i){
        first = 0;
        for (int j = 1; j <= i; ++j){
            if (arr[j] > arr[first]){
                first = j;
            }
            swap(arr[i], arr[first]);
        }
        cout << endl;
        display(arr, size);
    }

}

int main()
{
   const int MAX = 10;
   int numbers[MAX];

    srand(unsigned (time(0)));
    for (int i = 0; i < MAX; ++i){
        numbers[i] = (rand() % 100) + 1;
        cout << numbers[i]<< " ";
    }
    cout <<endl;

    SelectionSort(numbers, MAX);
    cout <<endl;
    display(numbers, MAX);
    return 0;
}
