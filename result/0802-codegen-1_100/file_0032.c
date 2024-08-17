
#include <stdio.h>

int a() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            return 1;
        }
    }
    return 2;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
