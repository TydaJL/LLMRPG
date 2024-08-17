
#include <stdio.h>

int a() {
    int i = 1;
    i = i * i;
    return i;
}

int main() {
    int j = a();
    j = a();
    printf("%d\n", j);
    return 0;
}
