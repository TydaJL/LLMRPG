
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    double b[10];
    int i;
    for(i = 0; i < 10; i++) {
        double c = (double)i + sin(i * M_PI);
        int d = (int)c;
        b[i] = c;
    }

    for(i = 0; i < 10; i++) {
        printf("%lf\n", b[i]);
    }

    return 0;
}

void b(int *c, int n) {
    char *e = (char *)malloc((n + 1) * sizeof(char));
    for(int i = 0; i < n; i++) {
        e[i] = (char)(c[i] + '0');
    }
    e[n] = '\0';
    printf("%s\n", e);
    free(e);
}

int main() {
    a();
    int arr[] = {1, 2, 3, 4, 5};
    b(arr, 5);
    return 0;
}
