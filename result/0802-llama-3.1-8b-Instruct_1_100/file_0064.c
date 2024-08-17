
#include <stdio.h>

void a() {
    int b[10];
    for(int i = 0; i < 10; i++) {
        b[i] = i * 2;
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
