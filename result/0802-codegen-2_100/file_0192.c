
#include <stdio.h>

int b() {
    int b;
    printf("Enter the second number: \n");
    scanf("%d", &b);
    return b;
}

int a() {
    int a = 0;
    printf("Enter the number: \n");
    while (a == 0) {
        scanf("%d", &a);
        if (a == 0) {
            printf("Enter number again: ");
        }
    }
    return a;
}

int main() {
    printf("The sum of two numbers = %d\n", a() + b());
    return 0;
}
