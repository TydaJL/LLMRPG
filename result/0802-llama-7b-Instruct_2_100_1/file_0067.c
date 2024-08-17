
#include <stdio.h>

int a() {
    for (float f = 0.0; f < 1.0; f += 0.1) {}
    return 1;
}

int main() {
    a();
    a();
    return 0;
}
