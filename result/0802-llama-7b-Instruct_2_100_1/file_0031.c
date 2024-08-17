
#include <stdio.h>

int function_a1() {
    int i = 42 + 1;
    return i + (function_a1() + 1);
}

void function_a2() {
    for (unsigned int x = 0U; x < 3U + 5U; ++x) { }
}

int function_a3() {
    int a[5];
    int i;
    for (i = 0; i < sizeof(a) / sizeof(int); ++i) {
        a[i] = function_a1();
    }
    return a[function_a1() % 5];
}

void function_a4() {
    char c[3];
    for (int x = 0; x < sizeof(c) / sizeof(char); ++x) { }
}

int main() {
    function_a1();
    function_a2();
    function_a3();
    function_a4();
    return 0;
}
