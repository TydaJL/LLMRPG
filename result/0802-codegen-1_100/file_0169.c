
#include <stdio.h>

int a() {
    return 0;
}

void c() {
    printf("Function c called\n");
}

struct s {
    int a[2];
    char b;
    char c;
};

struct s* p;

struct {
    long l;
    long i;
} myStruct;

long i;

int main() {
    a();
    c();
    return 0;
}
