
#include <stdio.h>

int a() {
    int b = 2;
    int c = 0;
    int d = b + c;
    return d;
}

int main() {
    int e = a();
    printf("Value of e: %d\n", e);
    return 0;
}
