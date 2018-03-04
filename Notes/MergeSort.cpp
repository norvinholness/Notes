#include <iostream>

using namespace std;

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

int main()
{
   const int MAX = 10;
   int numbers[] = {5,10,1,6,2,9,3,8,7,4};

   mergeSort(numbers,MAX,0,9);
   for (int i =0; i < MAX; ++i ){
        cout << numbers[i] << " ";
     }


    return 0;
}
