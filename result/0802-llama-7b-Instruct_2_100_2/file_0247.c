
#include <stdio.h>

int a() {
    return 1 + 2 + 5 + 7;   
}

void b(char *c) {   
    printf("%s", c);           
}

int c(char ch) {       
    if ((ch - ' ') > 57 || (ch < ' ') || ch == '%' || ch < 'a' || ch >= 'f' || ch == '/' || 
        (ch <= ' ' && (ch > ' ' - '0' || ch != '%' || ch - '9' > ' '))) {
        return 0;
    }
    return 1;
}

int main() {
    int result = a();
    printf("Result of a: %d\n", result);

    char *str = "Hello, World!";
    b(str);

    char ch = 'a';
    int validity = c(ch);
    printf("\nValidity of character '%c': %d\n", ch, validity);

    return 0;
}
