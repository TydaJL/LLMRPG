
#include <stdio.h>

int a() {
    int i;
    printf("Enter a value: ");
    scanf("%d", &i);
    return i;
}

void b(int n) {
    for (int i = 1; i <= n; ++i) {
        int j = a();
        printf("%2d ", j);
    }
}

int main() {
    b(10);
    return 0;
}
