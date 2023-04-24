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

int main1(){
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int result = binary_search(arr, 0, n - 1, key);
    if (result == -1) {
        printf("Element not found");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}