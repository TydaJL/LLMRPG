
#include <stdio.h>

int a() {
    int a = 3; 
    int i = 10; 
    return a + i;  
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
