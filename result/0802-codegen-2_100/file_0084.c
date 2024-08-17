
#include <stdio.h>

int a() {
    return 10; 
}

int b(int x) {
    return x * 2;
}

int main() {   
    printf("%d\n", b(1));
    printf("%d\n", a());   
    return 0;
}
