
#include <stdio.h>

int a_func() {
    int a = 1;
    while (a % 3 == 2) a--;
    while (a > 1) a -= 4;
    a *= 3;
    if (a % 10) return a + 1;
    else a /= 4;
    return a * 2;
}

int main(int argc, char** args) {
    int result = a_func();
    printf("\nResult: %d\n", result);
    return 0;
}
