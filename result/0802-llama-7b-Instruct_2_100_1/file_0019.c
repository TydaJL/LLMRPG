
#include <stdio.h>

int a() {
    return 5;
}

int* b() {
    return (int*)&a;
}

int* d = b();
int e = *d;

int f() {
    return 10;
}

int h = f() + a();
int j = a();

int k = (int)&a[3] + e;

int* l() {
    return b() + (int)d;
}

void m() {}

void* n() {
    n();
    m();
    return l();
}

void* o;

int main(int argc, char* argv[]) {
    printf("Hello %d %p %s\n%d %c %f %e\n%f %e %f %f %d %s %c %e %e %e\n",
           h * j * e * e + f() * (e + e), (void*)d, "SampleString", e, 'A', 1.0, 2.0,
           3.0, 4.0, 5, "String", 'B', 6.0, 7.0, 8.0);
    return 0;
}
