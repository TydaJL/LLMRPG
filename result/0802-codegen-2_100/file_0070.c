
#include <stdio.h>

int a() {
    int i = 0;
    while (i < 100000) {
        i++;
    }
    return i;
}

int main(int n, char** argv) {
    printf("%d\n", a());
    return 0;
}
