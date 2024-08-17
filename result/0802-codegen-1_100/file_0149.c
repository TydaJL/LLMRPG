
#include <stdio.h>

int a() {
    printf("Enter an integer > ");
    int number;
    scanf("%d", &number);
    
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    
    return number;
}

int main() {
    a();
    return 0;
}
