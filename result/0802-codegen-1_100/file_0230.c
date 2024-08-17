
#include <stdio.h>

int a() {
    return 0;
}

int main() {
    a();
    printf("This works ");
    printf("s %d\n", 42);
    printf("b");
    printf(" %s", "additional text");
    if (1) {
        printf("Condition met\n");
    }
    return 0;
}
