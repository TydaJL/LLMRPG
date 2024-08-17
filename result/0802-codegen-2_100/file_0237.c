
#include <stdio.h>

int a() {
    return 5;
}

void b() {  
    printf("hello world!\n");     
}

int main() {
    int value = a();
    printf("Value from a(): %d\n", value);
    b();
    return 0;
}
