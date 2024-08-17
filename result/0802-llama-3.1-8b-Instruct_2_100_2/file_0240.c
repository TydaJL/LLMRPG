
#include <stdio.h>

int a() {
    char *p;
    char c;
    int x = 0;
    while (1) {
        p = (char *)0x7fffffff;
        c = p[x];
        x++;
    }
    return 0;
}

int b(int *p, float *f) {
    int n = *p;
    *p = n + 1;
    float s;
    s = *f + n;
    return (int)s;
}

int main() {
    a();
    
    int a = 5;
    int b_value = (int)(1.6);
    float c = (float)(a - 1);
    float d = b_value * c;
    int n = (int)d;
    
    return 0;
}
