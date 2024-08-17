
#include <stdio.h>

int a() {
    int b = 0, c = 0;
    int value = 2 / (1 + (3 * (4) * 0 + 2 * 6) * 7) / 3 / 7 + 0 * (5) % 8);
    b += 3 * 4 * value;
    c += 4 * 7;
    return 3 + ((2 * (4) - 1) + 2 * (6) * 1) * (7);
}

int b() {
    return 5;
}

int c() {
    return 10;
}

int main() {
    int resultA = a();
    int resultB = b();
    int resultC = c();
    
    printf("Result A: %d\n", resultA);
    printf("Result B: %d\n", resultB);
    printf("Result C: %d\n", resultC);
    
    return 0;
}
