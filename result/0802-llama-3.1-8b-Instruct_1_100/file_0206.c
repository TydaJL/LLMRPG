
#include <stdio.h>

int a() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("You entered: %d\n", n);
    return n;
}

int main() {
    a();
    return 0;
}
