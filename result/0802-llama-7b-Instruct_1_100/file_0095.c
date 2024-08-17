
#include <stdio.h>

void a() {
    long b[10];
    int g = 0, f = 0;
    long long e[10];
    int arr[10][10];
    for (int i = 0; i < 10; i++) {
        b[i] = i;
        e[i] = i * 2;
        for (int j = 0; j < 10; j++) {
            arr[i][j] = i + j;
        }
    }
    long long j = 0;
    for (int i = 0; i < 10; i++) {
        j += b[i] + e[i] + i - e[i] * -b[i] + i;
        j += e[i] * j / (i + 1);
    }
    printf("Final value of j: %lld\n", j);
}

int main() {
    a();
    return 0;
}
