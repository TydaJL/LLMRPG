
#include <stdio.h>

#define SI 3

typedef struct {
    int a;
    int b[SI];
    char c[SI];
    float d;
    double e;
} F;

int a() {
    return 2; 
}

int main() {
    int i = 3;
    while (i == 2) i = a(); 
    for (int k = 1; k <= 4; k = i + 2) {
        i = k - 3;  
    }
    int m = i % 2 + i / 3; 
    while (m % 10 != 1) {
        m = m + i;  
    }
    i = i - 2; 
    m = i - 3; 
    return m; 
}
