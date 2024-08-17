
#include <stdio.h>

void a() {
    float b[10];
    for(int i = 0; i < 10; i++) {
        b[i] = i * 1.0f;
    }
    for(int i = 0; i < 10; i++) {
        printf("%f\n", b[i]);
    }
}

int main() {
    a();
    return 0;
}
