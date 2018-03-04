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


void quickSort (int arr[], int left, int right){
    int i = left;
    int j = right;
    int pivot = arr[(left + right)/2];
    while ( i <= j){
        while (arr[i] < pivot ){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        if (i <= j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if (left < j){
        quickSort(arr, left, j);
    }
    if (i < right )
    {
        quickSort(arr, i, right);
    }
}

int main()
{
    const int size = 10;
    int numbers[size];
    srand(unsigned(time(0)));
    for (int i = 0; i < size; ++i){
        numbers[i] = (rand() % 100) + 1;
    }

    cout << "Unsorted Array: " <<endl;
    display(numbers, size);
    cout << "Sorting Array..." <<endl;
    quickSort(numbers, 0, size-1);
    cout << "Sorted Array: "<<endl;
    display(numbers,size);

    return 0;
}
