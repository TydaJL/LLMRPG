
#include <stdio.h>

int a() {
    return 0;
}

int main(int argc, char *argv[]) {
    int a_val = 1;
    int b = 2;

    if (argc == 1) {
        a_val = 3;
    } else if (argc == 2) {
        a_val = 4;
    }

    int d = a_val + (b + 3);
    int e = a();

    printf("a: %d, d: %d, e: %d\n", a_val, d, e);
    return 0;
}
