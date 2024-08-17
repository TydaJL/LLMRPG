
#include <stdio.h>

int a() {
    return 1 + 2;
}

int main() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("i is %d\n", i);
    }
    int result = a();
    printf("Result of a() is %d\n", result);
    return 0;
}
