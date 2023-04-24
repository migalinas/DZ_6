#include <stdio.h>

#define swap(x, y, T) do { T temp = x; x = y; y = temp; } while(0)

int main0() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b, int);
    printf("After swap: a = %d, b = %d\n", a, b);

    float c = 2.5, d = 7.8;
    printf("Before swap: c = %f, d = %f\n", c, d);
    swap(c, d, float);
    printf("After swap: c = %f, d = %f\n", c, d);

    return 0;
}