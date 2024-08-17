
#include <stdio.h>

int a() {
    return 10 << 3; 
} 

int b(void) {  
    return 20 << 2; 
}    

int main(void) { 
    printf("%d\n", a());
    printf("%d\n", b()); 
    return 0;   
}
