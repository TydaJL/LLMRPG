
#include <stdio.h>

int a() {
    return 1 + 3 * 4 / (2 - 1) % 2; 
}

int main() {   
    int x;    
    for (x = 0; x < 9; x++) {          
        printf("%2d   ", x);   
    }     
    printf("\b\n");        
    a();
    return 0;
}
