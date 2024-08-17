
#include <stdio.h>

int a() {
    int size = 10;
    int i[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int j;

    for (j = 0; j < 4; j++) {
        int *p = &i[j];
        for (int k = 1; k <= size; k++) {
            if (*p <= size) {
                printf("%d\n", *p);
                break;
            }
        }
    }
    return 0;
}

int main() {
    a();
    return 0;
}
