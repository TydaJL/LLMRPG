
#include <stdio.h>

int a() {
    int array[100];
    for (int i = 0; i < 100; i++) {
        array[i] = i;
    }
    return 0;
}

int main() {
    a();
    return 0;
}
