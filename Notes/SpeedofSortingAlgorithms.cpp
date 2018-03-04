#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <time.h>
#include <stdio.h>

using namespace std;

void display (int arr[], int size){
    for (int i =0; i < size; ++i ){
        cout << arr[i] << " ";
     }
     cout <<endl;
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
    }
}

void insertionSort (int arr[], int size){

    int j;
    for (int i = 0; i < size; ++i){
     j = i;
        while (j > 0 && arr[j -1] > arr[j]){
            swap (arr[j], arr[j-1]);
            j--;
        }
    }
}

void merge (int arr[], int size, int low, int mid, int high){
    int temp[size];
    for (int i = low; i <= high; ++i ){
        temp[i] = arr[i];
    }
    int i = low;
    int j = mid+1;
    int k = low;

    while (i <= mid && j <= high){
        if (temp[i] <= temp[j]){
            arr[k] = temp[i];
            ++i;
        } else {
            arr[k] = temp[j];
            ++j;
        }
        ++k;
    }
    while ( i <= mid){
        arr[k] = temp[i];
        ++k;
        ++i;
    }
}

void mergeSort ( int arr[], int size, int low, int high){

    if (low < high ){
        int middle = (low + high) / 2;
        mergeSort(arr,size,low,middle);
        mergeSort(arr,size, middle+1, high);
        merge(arr,size,low,middle,high);
    }
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

double getTime (clock_t time1, clock_t time2){
    double ticks = time1 - time2;
    return abs((ticks*10)/CLOCKS_PER_SEC);
}

void genData(int arr[], int size){
    srand(time(NULL));
    for (int i =0; i < size; ++i){
        arr[i] = rand() % 100 +1 ;
    }
}


int main()
{
    const int MAX =  10000;
    int numbers [MAX];


    // Insertion Sort Time
    genData(numbers, MAX);
    clock_t ibegin = clock();
    insertionSort(numbers,MAX);
    clock_t iend =  clock();
    cout << "Insertion Sort: " << getTime(ibegin,iend) <<endl;

    // Quick Sort Time
    genData(numbers, MAX);
    clock_t qbegin = clock();
    quickSort(numbers,0,MAX);
    clock_t qend =  clock();
    cout << "Quick Sort: " << getTime(qbegin,qend) <<endl;


    // Merge Sort Time
    genData(numbers, MAX);
    clock_t mbegin = clock();
    mergeSort(numbers,MAX,0,MAX-1);
    clock_t mend =  clock();
    cout << "Merge Sort: " << getTime(mbegin,mend) <<endl;

     // Selection Sort Time
    genData(numbers, MAX);
    clock_t sbegin = clock();
    SelectionSort(numbers,MAX);
    clock_t send   = clock();
    cout << "Selection Sort: " << getTime(sbegin,send) <<endl;
	
	// Most Efficient 
	// 1. Merge Sort 
	// 1. Quick Sort
	// 2. Insertion Sort
	// 3. Selection Sort

    return 0;
}
