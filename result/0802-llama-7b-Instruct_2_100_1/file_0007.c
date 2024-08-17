
#include <stdio.h>

void a() {
    int size, i;
    for (size = 1 + 1 + 2 + 3; size < 20 / 4; size *= size / 5) {
        for (i = 1; i < 20; ++i) {
            int array[100];
            if (size * size < 100) {
                array[size * size] = i % 20 + size + size;
            }
        }
    }
}

int main() {
    int i;
    for (i = 0; i < 10; i += 1) {
        a();
    }
    return 0;
}
