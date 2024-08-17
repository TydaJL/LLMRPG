
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a() {
    char *str;
    str = "Hello, World";
    return strlen(str);
}

int b(int x) {
    double y;
    float f;
    char *ptr;
    y = x * x;
    y /= 5.2;
    f = (float)x * x;
    f += y;
    ptr = strdup("hello");
    free(ptr);
    return (int)f;
}

int c() {
    long long a;
    long b = 0;
    int c;
    long long d = 0;
    a = (long)b * b + b * 5;
    c = (int)(a + (long long)d);
    return c;
}

int main() {
    int len = a();
    printf("Length of string: %d\n", len);
    
    int result_b = b(5);
    printf("Result of b(5): %d\n", result_b);
    
    int result_c = c();
    printf("Result of c(): %d\n", result_c);
    
    return 0;
}
