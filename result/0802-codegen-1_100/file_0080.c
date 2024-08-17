
#include <stdio.h>

int a() {
    int b = 0;
    b += 10;

    for (int i = 0; i < 100000; ++i) {
        b++;
    }

    int c = b;

    while (c % 4 >= 3 && (c < 6 && c >= 4)) {
        c++;
    }

    if (c < 10) {
        c++;
    }

    for (int j = 0; j < 5; j++) {
        printf("%d\n", j);
    }
    
    return c;
}

int main() {
    int result = a();
    return 0;
}
