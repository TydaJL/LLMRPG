
#include <stdio.h>

int a() {
    return 7;
}

int b(char a[], char c, int d) {
    int e = 0;
    
    if (a[1] == c)
        e = e + 1;
    if (d != 2)
        e++;
    
    return e;
}

int main() {
    int f = 0;
    char g;
    char *h;

    scanf(" %c", &g);
    
    h = "hello";    
    printf("%s\n", h);
    
    int resultA = a();
    int resultB = b("hello", 'e', 1);
    
    printf("Result of a(): %d\n", resultA);
    printf("Result of b(): %d\n", resultB);
    
    return 0;
}
