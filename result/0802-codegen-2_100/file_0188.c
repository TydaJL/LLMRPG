
#include <stdio.h>

int a() {
    printf("\nI'm in the function a()");
    int x;

    printf("Enter a number: ");
    
    if (scanf("%d", &x) != 1) {
        printf("The input is wrong\n");
        return 0;
    } else {
        printf("Your value is %i\n", x);
    }
    return x;
}

int main() {
    a();
    return 0;
}
