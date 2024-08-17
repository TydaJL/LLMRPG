
#include <stdio.h>

int foo(int num) { 
    return (num + num); 
}  

int main() {
    int result = foo(5);
    printf("Result of foo(5): %d\n", result);
    return 0;
}
