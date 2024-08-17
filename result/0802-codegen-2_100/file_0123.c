
#include <stdio.h>

int a() {
    return 100;
}

void f() { }

int main() {
    a();
    if (a() > 0) {
        a(a() > a());  
        f();
    } else {
        f();
    }
    return 0;
}
