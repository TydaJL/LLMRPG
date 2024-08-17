
#include <stdio.h>

int a() {
    return 2;
}

void b(int b) {
    a();
}

int main() {
    b(2);
    return 0;
}
