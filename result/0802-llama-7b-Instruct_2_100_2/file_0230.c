
#include <stdio.h>

int a() {
    return 1; 
}

int f(char *a, int x) {
    int i = x, j = 0;
    while (i < x + 40) {
        if (j > x) {
            a = (char *)a + 1; 
        }
        j++;
        i++;
    }
    return 0; 
}

void b(double *x, float y) {
    int z;
    for (z = (int)(*x + y); z > 0 && z > (int)y; z--);
}

int main(int argc, char *argv[]) {
    double a_val = 5.0; 
    int i; 
    float j = 10.0; 
    char k = 'k', *l; 
    int m; 
    char n = ' '; 
    l = &n; 
    m = sizeof(int);
    int o = 1;

    a();
    f(l, 0);
    b(&a_val, j);
    
    return 0;
}
