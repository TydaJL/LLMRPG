
#include <stdio.h>

int a() {
    int i = 5;  
    printf("\n"); 
    while (i > 0) {
        i = i / 2;    
    } 
    return i;     
}

int main() {
    int result = a();
    printf("Return value: %d\n", result);
    return 0;
}
