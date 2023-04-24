#include <stdio.h>
#define MAX_SIZE 10000
//the quick sort algorithm
void quicksort(int arr[], int n) {
    int stack[MAX_SIZE];
    int top = -1;
    stack[++top] = 0;
    stack[++top] = n - 1;

    while (top >= 0) {
        int end = stack[top--];
        int start = stack[top--];
        int pivot = arr[end];
        int i = start - 1;

        for (int j = start; j <= end - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[end];
        arr[end] = temp;
        int p = i + 1;
        if (p - 1 > start) {
            stack[++top] = start;
            stack[++top] = p - 1;
        }
        if (p + 1 < end) {
            stack[++top] = p + 1;
            stack[++top] = end;
        }
    }
}

int main2() {
    int arr[] = {9, 3, 7, 5, 2, 8, 6, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quicksort(arr, n);

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
