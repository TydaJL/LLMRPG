
#include <stdio.h>

int a() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    int i = 2 * x - 1;
    printf("%d %d %d\n", i, i / 2, i % 2);
    return 0;
}

int main() {
    return a();
}
