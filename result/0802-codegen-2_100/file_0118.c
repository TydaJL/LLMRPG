
#include <stdio.h>

int a() {
    return 0; 
} 

int main() {  
    int x = 5; 
    float f = 4.0;    
    char c[] = {'1', '3', '2'};   
    printf("%d + %f + %c + %d\n", x, f, c[2], a());
    return 0;    
}
