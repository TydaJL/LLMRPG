
#include <stdio.h>

int a() {
    return 5;
}

int c(int a) {
    a = a - a;
    a += a;
    a -= a;
    a = a;
    return 2;
}

int main() {
    int result_a;
    int result_c;

    result_a = a();
    result_c = c(result_a);

    printf("Result from a(): %d\n", result_a);
    printf("Result from c(): %d\n", result_c);

    return 0;
}
