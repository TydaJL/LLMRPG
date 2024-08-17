
#include <stdio.h>

int a() {
    return 100; 
}

int c() {
    printf("hello world\n");    
    printf("hello\n");    
    printf("hello\n");        
    printf("hello\n");         
    return 100;        
} 

int main() {
    printf("hello world\n");  
    printf("hello\n");   
    printf("hello world\n");  

    int resultA = a();
    printf("%d\n", resultA);

    int resultC = c();
    printf("%d\n", resultC);

    return 10; 
}
