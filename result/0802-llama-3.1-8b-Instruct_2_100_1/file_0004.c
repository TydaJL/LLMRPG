
#include <stdio.h>

void a() {
    int i, j;
    float x[10];
    char *c;

    for (i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        c = (char *)(&x[i]);
        for (j = i + sizeof(x) / sizeof(x[0]) - 1; i <= j; j--) {
            c += i + sizeof(x[i]) - sizeof(char);
            c -= sizeof(float);
        }
    }

    for (i = 1; i < sizeof(x) / sizeof(x[0]); i++) {
        // Do something here if needed
    }
}

int main() {
    a();
    return 0;
}
