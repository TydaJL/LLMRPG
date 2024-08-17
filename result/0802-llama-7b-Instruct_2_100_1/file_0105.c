
#include <stdio.h>

int a() {
    return 1;
}

char b() {
    return 'b';
}

void c() {}

void *d;

void (*f)();

float g(void *h) {
    return 0.0f;
}

double i(float *j, double k) {
    return 0.0;
}

struct m {
    int l;
    struct m n;
    int p;
};

int m() {
    struct m instance = {1, {2, {0, {0, 0, 0}, 0}, 3}, 4}};
    return instance.l + instance.n.p;
}

double j(float *k) {
    return 0.0;
}

double l() {
    return 0.0;
}

int main() {
    int m_val;
    int *n = NULL;
    int *q = NULL;
    int o = (a() * (c(), 0)) + m();
    char *r;
    struct m s = {1, {2, {0, {0, 0, 0}, 0}, 3}, 4}};
    int *t = &s.l;
    int u;
    struct m *v = (struct m[5]) { {1, {2, {0, {0, 0, 0}, 0}, 3}, 4}} };

    return 0;
}
