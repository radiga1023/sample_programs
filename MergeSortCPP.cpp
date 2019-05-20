#include <iostream>

using namespace std;

/*
Algorithm:
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
*/

void merge(int*, int*, int, int, int);

void mergesort(int *a, int*b, int start, int end) {
    int halfpoint;
    if (start < end) {
        halfpoint = (start + end) / 2;
        mergesort(a, b, start, halfpoint);
        mergesort(a, b, halfpoint + 1, end);
        merge(a, b, start, halfpoint, end);
    }
}

void merge(int *a, int *b, int start, int halfpoint, int end) {
    int h, i, j, k;
    h = start;
    i = start;
    j = halfpoint + 1;

    while ((h <= halfpoint) && (j <= end)) {
        if (a[h] <= a[j]) {
            b[i] = a[h];
            h++;
        }
        else {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if (h > halfpoint) {
        for (k = j; k <= end; k++) {
            b[i] = a[k];
            i++;
        }
    }
    else {
        for (k = h; k <= halfpoint; k++) {
            b[i] = a[k];
            i++;
        }
    }

    // Write the final sorted array to our original one
    for (k = start; k <= end; k++) {
        a[k] = b[k];
    }
}

int main(int argc, char** argv) {
    int num;
    num = 6;
    int a[] = { 12, 11, 13, 5, 6, 7 };
    int b[6];
    

    // Start merge sort
    mergesort(a, b, 0, num - 1);

    // Print the sorted array
    cout << endl;
    for (int i = 0; i < num; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
