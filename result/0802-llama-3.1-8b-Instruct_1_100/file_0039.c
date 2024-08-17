
#include <stdio.h>

int a() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    printf("You entered: %s\n", str);
    return 0;
}

int main() {
    a();
    return 0;
}
