
#include <stdio.h>

int a() {
    return 5; 
}

int main() { 
    int i = 0;    
    float f = 0;     
    while (i < 10) {   
        f = (f + 1) / a();         
        i = (i + 1);    
    }        
    
    printf("%f\n", f);     
    return 0;
}
