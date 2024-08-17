
#include <stdio.h>

int a() {
    double b[10][10] = {0};
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            b[i][j] = (i + 1) * (j + 1);
        }
    }
    double sum = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            sum += b[i][j];
        }
    }
    return (sum > 0) ? 1 : 0;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
