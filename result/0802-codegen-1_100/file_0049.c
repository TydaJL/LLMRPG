
#include <stdio.h>

void a() {
    char mask1 = '\f';
    printf("This is a masked character: %c\n", mask1);
    char *string = ""; 
    printf("%s\n", string);
}

int main() {
    a();
    return 0;
}
