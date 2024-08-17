
#include <stdio.h>

int a() {
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            if (i + j == 9) {
                return j;
            }
        }
    }
    return 0;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
