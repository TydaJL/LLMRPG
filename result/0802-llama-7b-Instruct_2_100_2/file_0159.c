
#include <stdio.h>

int a() {
    return 4;
}

int b() {
    return 4;
}

int c() {
    return 1;
}

void d() {
    return;
}

int e() {
    return 0;
}

float f() {
    return 0.0f;
}

char *g() {
    return NULL;
}

void h(int x) {
    return;
}

double i() {
    return 0.0;
}

void j() {
    return;
}

struct k {};

union l {};

int m() {
    return 0;
}

int n = m();

int o(int x) {
    return x;
}

int p(int x, int y) {
    return x;
}

int q() {
    return 0;
}

int r(int x, int y, int z) {
    return x + y + z;
}

float s(float x) {
    return x;
}

float t() {
    return 0.0f;
}

char u() {
    return 'a';
}

int v() {
    return 0;
}

void *w() {
    return NULL;
}

void *x() {
    return NULL;
}

void y(int *ptr, void *vptr) {
    return;
}

char *z() {
    return NULL;
}

void z_func(char *str) {
    return;
}

int main(int argc, char *argv[]) {
    printf("%d\n", a());
    printf("%d\n", b());
    printf("%d\n", c());
    d();
    printf("%d\n", e());
    printf("%.2f\n", f());
    h(5);
    printf("%.2f\n", i());
    j();
    printf("%d\n", n);
    printf("%d\n", o(10));
    printf("%d\n", p(3, 4));
    printf("%d\n", q());
    printf("%d\n", r(1, 2, 3));
    printf("%.2f\n", s(2.5f));
    printf("%.2f\n", t());
    printf("%c\n", u());
    printf("%d\n", v());
    w();
    x();
    int *ptr = NULL;
    y(ptr, NULL);
    z_func(NULL);
    return 0;
}
