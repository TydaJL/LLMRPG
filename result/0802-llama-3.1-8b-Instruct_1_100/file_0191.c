
#include <stdio.h>

int a() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("a: %d\n", i);
    }
    return i;
}

int main() {
    int result = a();
    printf("Final value of i: %d\n", result);
    return 0;
}
