
#include <stdio.h>

int a() {
    return 1 + 1;   
}   

int b() {  
    return 1 + 3;        
}       

int main() {
    int x = a() * b();
    printf("%d\n", x);
    return 0;      
}
