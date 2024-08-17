
#include <stdio.h>

void a() {
    int j = 10;
    int i = 0;
    while (1) {
        if (j > i) {
            j--;
        } else {
            break;
        }
    }
}

void b(int *a, int *b) {
    if (a > b) {
        while (1) {
            (*a)++;
            if (a == b + *b) {
                *b = 0;
                break;
            }
        }
    }
}

int main(void) {
    a();
    int x = 0, y = 5;
    b(&x, &y);
    return 0;
}
