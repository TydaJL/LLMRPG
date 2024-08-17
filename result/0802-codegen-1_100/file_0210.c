
#include <stdio.h>

int a() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Value of i: %d\n", i);
    }
    if (i < 5) {
        return 1;
    }
    return 0;
}

int b() {
    int j = 0;
    while (j + 3 == 5 && j < 10) {
        j++;
    }
    return j;
}

int main() {
    a();
    b();
    return 0;
}
