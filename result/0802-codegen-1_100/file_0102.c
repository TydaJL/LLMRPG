
#include <stdio.h>

void a() {
    int x[3];
    double t[10][10];
    int i;

    for (i = 0; i < 3; i++) {
        x[i] = i;
    }

    for (i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            t[i][j] = (double)(i * j);
        }
    }
}

int main() {
    a();
    return 0;
}
