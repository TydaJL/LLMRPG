
#include <stdio.h>

int a() {
    return 1; 
}

void f(char *s) {
    s[0] = 0;
}

int main() {  
    printf("Enter a number: ");  
    char input[100];
    scanf("%99s", input);
    f(input);
    printf("a = %d\n", a());       
    printf("Hello world\n");    
    return 0;
}
