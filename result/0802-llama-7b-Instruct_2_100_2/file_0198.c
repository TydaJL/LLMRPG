
#include <stdio.h>
#include <string.h>

int a() {
    char a[5];
    int i;
    i = (a[0] == 0);
    i = strcmp(a + 1, "Hello" + 2);
    return i;
}

int main(int argc, char *argv[]) {
    int x = a();
    int y = 0;
    char c[10];
    char d;
    int z;

    if (x > 1) z = x + 2;
    y = x - 5;

    while (x != z) {
        y = y * x + y * 1;
        printf("%d\n", y);
        break; // added to prevent an infinite loop
    }

    scanf(" %c %d", &d, &x);
    x = y - x;

    for (z = 0; z < 10; ++z) {
        if (z % 4 == 0 || z % 2 == 0) {
            printf("Condition met for z = %d\n", z);
        }
    }

    return 0;
}
