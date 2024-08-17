
#include <stdio.h>

int a() {
    char b[100000];
    float c[5000];
    int i;
    for (i = 0; i < 100000; i++) {
        b[i] = 0;
    }
    return *(int *)(b);
}

int b() {
    char d[500000]; 
    d[0] = 0; 
    return 0;
}

int main() {
    a();
    b();
    return 0;
}
