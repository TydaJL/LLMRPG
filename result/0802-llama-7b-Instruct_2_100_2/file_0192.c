
#include <stdio.h>
#include <stdbool.h>

int a() {
    int i = 0;
    int sum = 0;
    while (i < 99) {
        sum += i;
        i++;
    }
    return sum;
}

void b(int a) {
    int i;
    int sum = 0;
    for (i = 0; i <= a; i++) {
        sum += i;
    }
    printf("Sum in b: %d\n", sum);
}

void f(int a, float b, float *c, bool d) {
    int e;
    for (e = 0; e < 4; ++e) {
        if (d == true) {
            c[e] = e * b;
        } else {
            c[e] = a;
        }
    }
}

int main() {
    int val_a = 10;
    int val_b = 20;
    int sum = 0;

    while (val_a <= val_b) {
        sum += val_a;
        val_a++;
    }

    printf("Sum in main: %d\n", sum);
    
    int result_a = a();
    printf("Result of function a: %d\n", result_a);

    b(10);

    float c_array[4];
    f(5, 2.0, c_array, true);
    for (int i = 0; i < 4; i++) {
        printf("c_array[%d]: %.2f\n", i, c_array[i]);
    }

    return 0;
}
