
#include <stdio.h>
#include <stdlib.h>

#define INFINITY_MAX 100
#define MAX 10

int a() {
    return 1;
}

int b(int i) {
    if (i % 2 != 0) {
        i++;
    }
    i++;
    printf("%d\n", i);
    return i;
}

int main(void) {
    int arr[100];
    int b_value;
    int c = 0;
    int d;
    int i;

    for (i = INFINITY_MAX, d = 0; i > d; i--, d++) {
        arr[d] = b(i);
    }

    b_value = a();

    return 0;
}
