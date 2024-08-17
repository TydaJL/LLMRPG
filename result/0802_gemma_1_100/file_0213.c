
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    return a();
}

int main() {
    a();
    b();
    return 0;
}
