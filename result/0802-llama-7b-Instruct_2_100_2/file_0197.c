
#include <stdio.h>

long a() {
    long n;
    for (n = 1; n < (1L << 20); n++) { }
    return n - 1;
}

int main() {
    long result = a();
    printf("%ld\n", result);
    return 0;
}
