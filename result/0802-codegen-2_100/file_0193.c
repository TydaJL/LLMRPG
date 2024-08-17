
#include <stdio.h>

int a() {
    char a[1000];
    int i;

    for (i = 0; i < 1000; i++) {
        a[i] = 0;
    }
    return 0;
}

int main() {
    a();
    return 0;
}
