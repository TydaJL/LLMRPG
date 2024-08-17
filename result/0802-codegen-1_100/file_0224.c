
#include <stdio.h>
#include <stdlib.h>

int a() {
    char buffer[100];
    int t = 0;

    printf("Enter a number: ");
    fgets(buffer, sizeof(buffer), stdin);
    t = atoi(buffer);

    return t; 
}

int main() {
    int result = a();
    printf("You entered: %d\n", result);
    return 0;
}
