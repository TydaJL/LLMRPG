
#include <stdio.h>

int a() {
    int i = 5; 
    double d = 1 / 0.0; 
    char c = ' '; 
    int x = 1; 
    float f = 2 / 3.0; 
    while (i) { 
        if (d) 
            i = !c; 
        else 
            f = d / x + f; 
    }
    return 1; 
}

int b() {
    double d = 1 / 0.0; 
    int x = 1; 
    float c = 1 * 0; 
    if (d || x) 
        x = c; 
    return 0; 
}

int main(int argc, char *argv[]) {
    int x = -6; 
    double d = 2 / 0.1; 
    char s[] = "Hello \\n World!"; 
    int n = 0; 
    for (int i = x; i < 20; i++) 
        d += i + n; 
    printf("%s\n", s);
    a();
    b();
    return 0; 
}
