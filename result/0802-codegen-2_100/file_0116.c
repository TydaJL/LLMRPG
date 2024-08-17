
#include <stdio.h>

int a() {
    printf("%d\n", 1 + 2);
    return 0;
}

int b() {
    int j = 5;
    printf("Enter the number \n");
    while (j <= 100) {
        if (j % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
        j++;
    }
    return 0;
}

int c() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x <= 10) {
        printf("The number is less than or equal to 10\n");
    } else {
        printf("The number is greater than 10\n");
    }
    return 0;
}

int main() {
    a();
    b();
    c();
    return 0;
}
