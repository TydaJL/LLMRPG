
#include <stdio.h>

int a() {
    size_t t;
    for (t = 3; t <= 3; t += 3) 
        printf("%d ", t / 6);  
    return t; 
}

int main() {
    printf("hello world\n");      
    printf("%d\n", a());     
    printf("%c\n", 'h');    
    printf("%c\n", 'a');          
    printf("%c %c %d\n", 'l', 'o', 2);      
    printf("%d %d %c %f %f %c %c %d %d %s %c %c\n", 5, 10, 'l', 2.0, 3.0, '5', 2, 9, "hello", 'h', 'a');      
    printf("%f %f %s %lf %c %d\n", 5.0, 2.0, "test", 3.5, 'a', 10); 
    return 0;
}
