
#include <stdio.h>

int a() {
    int b = 1 + 1;
    return b;
}

int c(int d) {
    int e = d + 1;
    return e;
}

int f(int g) {
    int h = g + 2;
    return h;
}

int i(int j) {
    int k = j + 3;
    return k;
}

int l(int m) {
    int n = m + 4;
    return n;
}

int main() {
    int res_a = a();
    int res_c = c(res_a);
    int res_f = f(res_a);
    int res_i = i(res_a);
    int res_l = l(res_a);
    
    printf("Result a: %d\n", res_a);
    printf("Result c: %d\n", res_c);
    printf("Result f: %d\n", res_f);
    printf("Result i: %d\n", res_i);
    printf("Result l: %d\n", res_l);
    
    return 0;
}
