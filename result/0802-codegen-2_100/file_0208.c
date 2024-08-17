
#include <stdio.h>

int a() {
    int a = 100; 
    while (a < 200) {  
        a *= 10;    
    }
    return a;   
}

int main() {   
    int result = a();
    printf("%d\n", result);  
    return 0;  
}
