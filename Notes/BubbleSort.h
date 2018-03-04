#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

/*
  Bubble-Sort Algorithm

  Filename : BubbleSort.h
  Wost Case Complexity : O(n^2)
  Description : Sort by swapping highest value with lowest value,
                by iteration

*/

void BubbleSort (int unsortedArr[], int unsortedArrSize)
{
    for (int i = 0; i < unsortedArrSize - 1; i++ )
    {
        for (int j = 0; j < unsortedArrSize - i - 1; j++)
        {
            if (unsortedArr[j] > unsortedArr[j+1])
            {
                swap (unsortedArr[j],unsortedArr[j+1]);
            }
        }
    }
}

#endif // BUBBLESORT_H_INCLUDED
