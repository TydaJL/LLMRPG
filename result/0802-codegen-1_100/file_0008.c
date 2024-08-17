
#include <stdio.h>

int a() {
    static int t = 0;
    int i = 0;
    if (t < 5) {
        t += 3 * a() + i - 1;
    }
    t++;
    t = t - 5;
    return i;
}

int b() {
    return 10;
}

int main() {
    int i = 0;
    int result_a = a();
    i = 0;
    if (i < 5) {
        printf("Value of i: %d\n", i);
    }
    printf("Result of b: %d\n", b());
    return 0;
}
