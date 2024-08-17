
#include <stdio.h>

int b() {
    return 42;
}

int a() {
    int value = b();
    for (int i = 0; i < value; i++) {
        printf("%d\n", b());
    }
    do {
        value = b();
    } while (0 == ++value);
    
    while (0) {
        value = value + b();
    }
    
    value = ++value;
    return value;
}

int main() {
    a();
    return 0;
}
