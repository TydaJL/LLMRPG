
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 42 + (rand() % 100);
    int i = 10;
    for (;;) {
        if (i * i > n) return n;
        i++;
    }
}

int b() {
    int result1 = a();
    int result2 = a();
    int result3 = a();
    return result1 / result2 * result3;
}

int c() {
    int result1 = b();
    int result2 = a();
    int result3 = b();
    return result1 / result2 - result3 / result1;
}

int main(void) {
    srand(time(NULL));
    int d = c() / a();
    printf("The answer to the universe and everything is = %d\n", d);
    return 0;
}
