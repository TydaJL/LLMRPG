
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int a() {
    int i = 0, n = 0;
    float x = 0.0;

    if (n > 2) {
        return 1;
    }
    if (x < 5.0) {
        i = i + n;
    }
    printf("%f\n", x);
    return i + 2;
}

int main(void) {
    int result = a();
    return 0;
}
