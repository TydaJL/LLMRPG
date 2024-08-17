
#include <stdio.h>

int a() {
    return 10;  
}

int main() {
    int value = a();
    printf("The value returned by a() is: %d\n", value);
    return 0;
}
