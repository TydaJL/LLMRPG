
#include <stdio.h>

int a() {
    return 3; 
}

void b() { 
    int x = 1, y = 0;   
    if (x > 0 && y > 0)    
        printf("\ntext\n%d\n", x);   
    else
        printf("\ntext\n");    
}

int main() {
    printf("\na b a b a b\n");  
    b(); 
    printf("\na b a a b\n"); 
    return 0;
}
