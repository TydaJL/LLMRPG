
#include <stdio.h>

int a() {
    char a;
    int i = 0, j = 1;
    double x;

    while (i < j) {
        x = j + i;
        return i;
    }

    for (j = 0; j <= 10; j++) {
        a = i;
        i++;
    }

    return 0;
}

int main() {
    a();
    return 0;
}
