#include <stdio.h>

void bubble_sort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 1, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Before sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    bubble_sort(arr, size);

    printf("\nAfter sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
