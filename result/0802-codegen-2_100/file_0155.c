
#include <stdio.h>

int a() {
    int n = 5;
    return n ? n : 0;
}

int main() {
    printf(" %d ", a());
    return 0;
}
