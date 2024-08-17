
#include <stdio.h>

int a() {
    float arr[3] = {1.0, 2.0, 3.0};
    return 0;
}

void foo() {
    float x, *f;
    x = 5.0;
    f = &x;
    *f = *f + 1.0;
}

void bar(int *i, int j) {
    if (*i >= j) {
        *i = j;
    }
}

int main() {
    int result = a();
    foo();
    int val = 10;
    bar(&val, 5);
    printf("Result: %d, Updated value: %d\n", result, val);
    return 0;
}
