
#include <stdio.h>

int a() {
    return 4; 
}

int main() { 
    int result = a() + 1; 
    if (result < 3) { 
        printf("\nA is less\n");     
    } else if (result == 3) { 
        if (result < 10) { 
            printf("\nB is less than\n");   
        } 
    } else {      
        printf("\nC is more than\n");        
    } 
    return 0;
}
