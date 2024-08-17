
#include <stdio.h>

int a() {
    int i = 0; 
    if (i == 0) { 
        i++; 
    } 
    return (i + 1);   
}

int main() {  
    printf("Hello World!\n");    

    int i, j; 
    float x; 
    i = 0; 
    j = 1;

    while ((i++) <= 100) {  
        x = 0.0; 
        while (x < 10) {      
            if (i > 5 && j < 5) {
                x = 0.; 
                printf("Hello world\n");    
            } else { 
                x *= 1.;   
            }    
            j++;       
        }
    }
    a();
    return 0;
}
