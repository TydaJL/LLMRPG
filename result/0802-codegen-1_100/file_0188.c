
#include <stdio.h>

int a() {
    return 1;
}

int main() {
    printf("Enter a = %d\n", a());
    a();
    
    int c = a() + a() * a() / a() - a() % a();
    
    if (a() > 0) {
        printf("a() returned a positive value\n");
    }

    return 0;
}
