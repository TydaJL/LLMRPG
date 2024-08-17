
#include <stdio.h>

void a() {
    double vecDouble[100];
    float vecFloat[100];
    
    for (int i = 0; i < 100; i++) {
        vecDouble[i] = i * 1.1;
        vecFloat[i] = (float)i / 2;
    }

    printf("Values in vecDouble:\n");
    for (int i = 0; i < 100; i++) {
        printf("%f ", vecDouble[i]);
    }
    printf("\n");

    printf("Values in vecFloat:\n");
    for (int i = 0; i < 100; i++) {
        printf("%f ", vecFloat[i]);
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
