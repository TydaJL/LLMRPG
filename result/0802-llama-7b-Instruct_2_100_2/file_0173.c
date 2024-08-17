
#include <stdio.h>
#include <stdlib.h>

int random_value() {
    int n = 50 + 10 * rand() / (RAND_MAX + 1.0) - 2;
    return n;
}

void print_values() {
    int i = random_value();
    while (i-- > 0) {
        int j = rand() & 0xf;
        printf("%d\n", j);
    }
    printf("%d\n", random_value());
}

void iterate_values(void) {
    for (int i = 0; i < 5; i++) {
        printf("Iteration: %d\n", i);
    }
}

int main() {
    srand(time(NULL));
    print_values();
    iterate_values();
    return 0;
}
