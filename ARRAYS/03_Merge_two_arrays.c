//Write a program to merge two arrays.
#include <stdio.h>

int main() {
    int arr1[5], arr2[5], arr3[10];
    int i, j;

    printf("Enter 5 elements for first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 elements for second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy first array to third array
    for(i = 0; i < 5; i++) {
        arr3[i] = arr1[i];
    }

    // Copy second array to third array
    for(j = 0; j < 5; j++) {
        arr3[i] = arr2[j];
        i++;
    }

    printf("\nMerged Array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
