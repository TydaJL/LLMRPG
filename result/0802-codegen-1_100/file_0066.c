
#include <stdio.h>

int a() {
    return 2;
}

void c() {
}

double b;

struct d {
    void p(int c); // Changed from int &c to int c
    double b;
} d_instance;

void print() {
}

int main() {
    int result = a();
    c();
    print();
    return 0;
}
