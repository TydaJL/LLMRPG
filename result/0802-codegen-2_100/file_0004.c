
#include <stdio.h>

int a() {
    printf("\n");
    return 1;
}

void b() {
    a();
    printf("\n");
}

int main(int arg, char *args[]) {
    int i;
    int j = 0;

    b();

    for (j = 0; j < arg; j++) {
        i = 0;
        while (i < 10) {
            printf("%d\n", i);
            i = i + 1;
        }
    }
    printf("\n");
    printf("\n");
    return 0;
}
