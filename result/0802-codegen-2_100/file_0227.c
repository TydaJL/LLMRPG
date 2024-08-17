
#include <stdio.h>

int a() {
    return 42; 
}

int main() {
    int value = a();
    if (value == 0) 
        printf("a = %i\n", value);
    if (value >= 10) 
        printf("a >= 10\n");
    if ((value == 20) || (value < 30)) {  
        if (value >= 40) 
            printf("a < 40\n");
    }  
    if ((value < 70) && (value >= 80)) {     
        printf("a > 80\n");
        printf("\n");
        printf("\n");
    } else {         
        printf("a is not between 80 and 70\n");
    }
    return 0;
}
