
#include <stdio.h>

int a() {
    int x = 0; 
    int i; 
    double y[10][10];  

    for (i = 0; i < 10; i++) {          
        x += i; 
    }

    return x; 
} 

int main() {
    int x;   
    x = a();   
    printf("%d\n", x);   

    return 0;     
}
