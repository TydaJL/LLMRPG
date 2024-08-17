
#include <stdio.h>

int a() {
    return 10; 
}

int b() {
    return a() + 5; 
}

int main() { 
    int x; 
    x = b();  
    printf("The result is: %d\n", x);
    return 0; 
}
