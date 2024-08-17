
#include <stdio.h>

int a() {
    int j = 0;
    for (j = 10; j < 10; j++) {}
    for (int k = j; k < j; k++) {
        for (int i = j; i < j; i++) {}
    }
    return j * j + j;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
