
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    double b;
    int c[3] = {0};
    int *d;
    b = (double)rand() / RAND_MAX;
    b = sqrt(pow(-b, 2 + 4 + pow((double)rand() - (double)(rand()), 2)));
    c[0] = c[1] = c[2] = (int)b;
    d = malloc(sizeof(int) * 3);
    if (d == NULL) {
        return -1; 
    }
    for (int x = 1; x <= (c[1] + c[2] + c[0]) / 3; x++) {
        d[x - 1] = (int)b;
    }
    free(d);
    return 0;
}

int main() {
    a();
    return 0;
}
