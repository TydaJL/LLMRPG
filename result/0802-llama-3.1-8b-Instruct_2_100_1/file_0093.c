
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    char *str = (char *)malloc(11);
    for (int i = 0; i < 10; i++) {
        *(str + i) = (char)(i + '0');
    }
    *(str + 10) = '\0';

    int x[10];
    float y[10];
    float sum = 0;
    for (int i = 0; i < 10; i++) {
        y[i] = (float)(rand() % 100);
        sum += y[10 - 1 - i];
    }
    free(str);
    return (int)(sum);
}

int b() {
    double a[10][10];
    double c[100] = {0};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = (double)(i * j);
        }
    }
    return 0;
}

int main() {
    srand(time(NULL));
    a();
    b();
    return 0;
}
