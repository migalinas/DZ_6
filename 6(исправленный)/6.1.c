#include <stdio.h>

#define swap(x, y, T) do { T temp = x; x = y; y = temp; } while(0)

int program0() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b, int);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}