
#include <stdio.h>

int a() {
    return 0;
}

int main() {
    int x = 5;
    int y = 7;
    int z = x * y + a();
    
    printf("The value of z is %d\n", z);
    return 0;
}
