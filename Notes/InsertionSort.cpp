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
     cout <<endl;
}

void insertionSort (int arr[], int size){

    int j;
    for (int i = 0; i < size; ++i){
     j = i;
        while (j > 0 && arr[j -1] > arr[j]){
            swap (arr[j], arr[j-1]);
            j--;
        }

        display(arr,size);
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
    insertionSort(numbers, MAX);
    display(numbers,MAX);

    return 0;
}
