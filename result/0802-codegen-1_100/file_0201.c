
#include <stdio.h>

void a() {
    double d[100][3];
    printf("a\n");
    printf("1.5 9.0 3.0\n\n");
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 3; j++) {
            d[i][j] = (i + 1) * (j + 1) * 1.0; 
            printf("%f ", d[i][j]);
        }
        printf("\n");
    }
}

int main() {
    a();
    return 0;
}
