#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED

#include <iostream>
using namespace std;

void selectionSort(int A[], int n)
{
    int min_idx;

    for (int i = 0; i < n-1; i++){
        min_idx = i;
        for (int j = i+1; j < n; j++){
            if (&A[j] < &A[min_idx]) {
                min_idx = j;
            }
        }
        swap(&A[min_idx], &A[i]);
    }
}

#endif // SELECTIONSORT_H_INCLUDED
