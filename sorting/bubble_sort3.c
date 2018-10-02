#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

void bubble_sort (int *array, int n) {
    int i, j, swapped;

    for (i = 0; i < n; i++) {
        swapped = false;
        for (j = 1; j < n; j++) {
            if (array[j] < array[j-1]) {
                swap(&array[j], &array[j-1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

void bubble_sort_recursive (int *array, int n) {
    if (n == 1)
        return;
    
    int i;
    for (i = 0; i < n-1; i++) {
        if (array[i] > array[i+1]) {
            swap(&array[i], &array[i+1]);
        }
    }

    bubble_sort_recursive(array, n-1);
}