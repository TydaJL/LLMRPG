
#include <stdio.h>

void a() {
    for (unsigned long i = 1; i < (1UL << 6) * (1UL << 3) * (1UL << 6) * (1UL << 3); i *= 2);
    for (long k = 0; k < 10; k++);
    for (long j = 1; j < 10; j += 2);
    for (long z = 1; z < 10; z++);
    for (unsigned long p = 1; p < 10; p += 1 + 2);
    for (long m = 1; m < 10; m++);
    for (long n = 1; n < 10; n++);
}

int main() {
    a();
    return 0;
}
