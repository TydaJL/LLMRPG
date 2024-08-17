
#include <stdio.h>

int a() {
    int i = 0;
    for (;;) { 
        ++i; 
        if (i >= 100) break; 
    }
    return i;
}

int b(int a, char c, float f, char *d, int e) {
    for (;;) { 
        ++a; 
        if (a >= 100) break; 
    }
    return a;
}

int main() {
    int result_a = a();
    int result_b = b(0, 'c', 0.0f, NULL, 0);
    printf("Result of a(): %d\n", result_a);
    printf("Result of b(): %d\n", result_b);
    return 0;
}
