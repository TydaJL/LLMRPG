
#include <stdio.h>

int a() {
    return 10 + 2;   
} 

int main() {    
    int i = -23 * a();          
    printf("i == %d\n", i); 
    
    int b = 5;    
    if (b > 4)   
        printf("%d < %d\n", b, 4);      
    else 
        printf("%d >= %d\n", b, 4);  
    
    char str[] = "ABC DEF";        
    printf("%s\n", "GHI jkl mno pq rs");   
    
    char c[10] = "ABCD EF";
    printf("G H %s\n", c);
    
    double d = 0.0;

    return 0;
}
