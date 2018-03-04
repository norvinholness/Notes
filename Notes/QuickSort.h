#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

/*
  Quick-Sort Algorithm

  Worst Case : O(n^2)
  Average Case : O(n*log(n))
*/

int partitionArray (int *A, int left, int right){
    int mid =  (left + right)/2;
    int pivot =  A[mid];

    while (left <= right){
        while (A[left] < pivot){
            left++;
        }
        while (A[right] > pivot){
            right--;
        }

        if (left <= right){
            swap(A[left], A[right]);
            left++;
            right--;
        }
    }
    return left;
}

void quickSort (int *A, int left, int right){
    int index = partitionArray(A, left, right);

    if (left < index - 1){
        quickSort(A, left, index - 1);
    }

    if (index < right ){
        quickSort(A, index, right);
    }
}
#endif // QUICKSORT_H_INCLUDED
