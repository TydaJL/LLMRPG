
#include <stdio.h>

void a() {
    int i = 0, j = 0;
    printf("i = %d\n", i);
    for (j = 0; j < 5; j++) {
        printf("j = %d\n", j);
    }
}

int main() {
    a();
    return 0;
}
