
#include <stdio.h>
#include <math.h>

int a() {
    printf("a\n");
    int x = 100;
    int b = 10;
    float c = 10;
    printf("%d %d %2f\n", (x * b / c), x, c);
    printf("\n");
    return 0;
}

float func(float a, float b) {
    return a * b;
}

int main(void) {
    a();
    float result = func(5.0, 4.0);
    printf("Result of func: %f\n", result);
    return 0;
}
