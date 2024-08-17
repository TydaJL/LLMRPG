
#include <stdio.h>

int a() {
    return 4; 
}

int b(int x) {
    if (a() + x == 5) { 
        printf("Hello\n%d\n\n\n\n", b(x));   
        return x;    
    } else {     
        return x;   
    }   
}

int main() {
    printf("%d\n", a());    
    b(a());     
    printf("%d\n", b(1));  
    return 0; 
}
