#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1;
    }
    int middle = (left + right) / 2;
    if (arr[middle] == key) {
        return middle;
    } else if (arr[middle] > key) {
        return binary_search(arr, left, middle - 1, key);
    } else {
        return binary_search(arr, middle + 1, right, key);
    }
}

int program1() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binary_search(arr, 0, n - 1, key);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}