
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

char b[] = "A B C ";
int *c;

void initialize_c() {
    c = malloc(5 * sizeof(int));
    for (int i = 1; i <= 5; i++) {
        c[i - 1] = i;
    }
}

void print_t_values() {
    int d = 1;
    for (int i = d; i <= c[2] + c[3]; i++) {
        for (int t = 1; t <= 3; t++) {
            printf("%i ", t);
        }
    }
}

void print_j_values() {
    for (int j = 1; j <= c[4] - c[3] - 1; j += c[4] - c[2]) {
        for (int k = 1; k <= c[4]; k++) {
            printf("%i ", k);
        }
    }
}

int main() {
    initialize_c();
    a();
    print_t_values();
    print_j_values();
    free(c);
    return 0;
}
