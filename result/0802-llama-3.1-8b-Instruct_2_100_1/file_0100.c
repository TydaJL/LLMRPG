
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int a() {
    int *array = (int *)malloc(sizeof(int) * 10000000);
    if (array == NULL) {
        return -1;
    }
    for (int i = 10000; i > 100; --i) {
        array[i] = (array[i - 1]) * (i - 100) / (i * 1000);
    }
    int result = array[100]; 
    free(array);
    return result;
}

int main() {
    double b_temp = -2.3 * (2 - 1) + (3 * 4);
    int b = (int)sqrt(b_temp);
    printf("Result of function a: %d\n", a());
    printf("Result of b: %d\n", b);
    return 0;
}
