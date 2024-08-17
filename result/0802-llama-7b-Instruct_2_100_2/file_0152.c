
#include <stdio.h>

int a() {
    int i = 10 + (i % 20);
    i *= 2;
    i = i ^ i;
    i = i * 10 + (i & 0xf) + i / 15 % (i & 0xf);
    i = i % 16;
    i = i * i;
    return i % 16 + ((i + 3) % 4) * (i % (((i / 5) * ((i % i) + 1) / i) * 2 + 1) * ((i % 5) + (i + 3)));
}

int main() {
    int x = 1;
    int j = 10, i;

    for (; x < 11; i = a(), ++x) {
        j = j * i * i * (i % (x + 1));
    }

    printf("Final value of j: %d\n", j);
    return 0;
}
