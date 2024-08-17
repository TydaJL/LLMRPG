
#include <stdio.h>

int a() {
    return 1;
}

int main() {
    int i, n;
    printf("Input a number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d ", a());
    }
    return 0;
}
