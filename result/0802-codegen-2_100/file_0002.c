
#include <stdio.h>

int a() {
    int i = 2; 
    char j = 3; 
    return i + j;
}

void b() { 
}

void c(int n, int m) { 
    int i = 2; 
    int j = 4; 
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    b();
    c(1, 2);
    return 0;
}
