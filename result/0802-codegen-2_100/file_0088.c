
#include <stdio.h>

int a() {
    return 42;
}

void foo(int x) { }

int main() {
    int result = a();
    foo(result);
    return 0;
}
