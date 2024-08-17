
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void a() {
    int *p = (int *)malloc(sizeof(int) * 1000);
    long long x;
    int y = 1;
    int i = 0, j;
    long long sum = 0;

    while (1) {
        while (i < 1000) {
            x = (long long)rand() * 1 / RAND_MAX * (1 + y);
            p[i++] = ((x * y + i) % (y + y)) + y;
            sum += x;
        }
        
        for (j = 0; j < 10; j++) {
            printf("%d ", p[j]);
        }
        break;
    }

    free(p);
    printf("\nSum: %lld\n", sum);
}

int main() {
    srand(time(NULL));
    a();
    return 0;
}
