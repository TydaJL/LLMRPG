
#include <stdio.h>

int a() {
    int b;
    printf("\nInput b: ");
    scanf("%d", &b);
    return b;
}

int main() {
    int result = a();
    printf("You entered: %d\n", result);
    return 0;
}
