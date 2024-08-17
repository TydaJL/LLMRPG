
#include <stdio.h>

int a() {
    char a = (char)0xFF;
    int b;

    for (b = 10; b >= 0; --b) {
        return b + 1;
    }
    return 0;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
