
#include <stdio.h>

int a() {
    float d[4];
    for (int i = 0; i < 4; i++) {
        d[i] = 0.0;
    }
    d[0] = 3.0;
    while ((int)d[0] < 3) {
        d[0] += 1.0;
    }
    return 0;
}

int main() {
    a();
    return 0;
}
