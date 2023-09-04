#include <stdio.h>
#include <stdlib.h>

// Comparison function used by qsort
int compare(const void *a, const void *b) {
    // Convert void pointers to int pointers and dereference them
    int num1 = *((int*)a);
    int num2 = *((int*)b);
    
    if (num1 < num2) {
        return -1;
    } else if (num1 > num2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr[] = {5, 2, 8, 6, 1, 9, 3, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    qsort(arr, size, sizeof(int), compare);
    
    printf("After sorting in ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
