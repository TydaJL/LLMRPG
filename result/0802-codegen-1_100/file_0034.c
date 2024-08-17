
#include <stdio.h>

void a() {
    int x = 1;
    int a = 1;
    char *p = NULL;

    for (int k = 0; k < 2; k++) {
        printf("k: %d\n", k);
    }
}

int main() {
    a();
    return 0;
}
