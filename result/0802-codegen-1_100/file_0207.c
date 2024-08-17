
#include <stdio.h>

#define MAX 100

void a() {
    float p[MAX];
    for (int i = 0; i < MAX; i++) {
        p[i] = i * 2.0; 
    }
    for (int i = 0; i < MAX; i++) {
        printf("%f\n", p[i] * 2);
    }
}

int main() {
    a();
    return 0;
}
