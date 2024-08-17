
#include <stdio.h>
#include <stdbool.h>

int a() {
    return 0;
}

void b(int x) { 
    printf("%i\n", x);
}

void c(void *x) {}

void f(void *x) {}

void g() {}

void h(int x) { 
    if (x) {}
}

void j() {}

void t() {}

void r(char x[]) {}

void p(char x) {}

void l(void *x[]) {}

void z(int x, int *y) {  
    while (1) {}
}

void y(double x[2][2][2][2][2]) {}

void q(void *x[]) { 
    while (true) {}
}

void m(char x, char y[2][2]) {}

void e(double x) {}

void u(double *x) {}

void n(int *x[2][2]) { 
    while (1) {}
}

void v(int *x, int y) {}

int main() {
    a();
    b(5);
    c(NULL);
    f(NULL);
    g();
    h(1);
    j();
    t();
    char arr[2][2] = {{'a', 'b'}, {'c', 'd'}};
    m('e', arr);
    e(3.14);
    double d;
    u(&d);
    
    int *intArr[2][2];
    n(intArr);
    v(NULL, 0);
    return 0;
}
