
#include <stdio.h>

int a() {
    int b = 2; 
    return (b + 2); 
}

int main() {
    int c = a();
    printf("c is: %i.\n", c);    
    return 0;
}
