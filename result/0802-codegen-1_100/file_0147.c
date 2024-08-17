
#include <stdio.h>

void a() {
    char c = 'A';
    char d = 'E';
    float g = 12.0f, h = 2.0f;
    float *i = &g, *p = &h; 
    float l = *i + *p; 
    printf("Result: %f\n", l);
}

int main() {
    a();
    return 0;
}
