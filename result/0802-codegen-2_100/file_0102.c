
#include <stdio.h>

int b() {
    return 42;
}

int a() {
    return b();
}

int main() { 
    int i = 0, j = 0, k = a(); 
    printf("The value of k is: %d\n", k);
    return 0;
}
