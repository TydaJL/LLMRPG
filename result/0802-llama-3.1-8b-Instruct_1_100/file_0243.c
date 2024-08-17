
#include <stdio.h>

int a() {
    int n;
    int *p = &n;
    printf("Enter a number: ");
    scanf("%d", p);
    printf("You entered: %d\n", *p);
    return 0;
}

int main() {
    a();
    return 0;
}
