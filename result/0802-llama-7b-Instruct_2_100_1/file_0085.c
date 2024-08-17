
#include <stdio.h>

int a() {
    int b = 0;
    return b + (b - b);
}

int b() {
    return a();
}

int c() {
    return b();
}

int d() {
    return c();
}

int main(int argc, char *argv[]) {
    int values[] = {1, 4, 0, 8, 1, 5, 8, 4, 6, 1, 2, 4, 3, 8, 3, 0, 2, 4, 6, 1, 2, 1, 3, 0, 7, 4, 0, 1, 8, 0, 8, 2, 1, 6, 0, 4, 5, 7, 2, 3, 7, 0, 1, 4, 3, 9, 6, 8, 2, 1, 3, 4, 7, 7, 5, 9, 2, 5, 1, 3, 2, 1, 7, 3};

    int result_a = a();
    int result_b = b();
    int result_c = c();
    int result_d = d();

    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Result of c: %d\n", result_c);
    printf("Result of d: %d\n", result_d);

    return 0;
}
