
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 0;
}

int c(int d) {
    return d * 2;
}

int main() {
    int resultA = a();
    int resultB = b();
    int resultC = c(5);
    
    printf("Result A: %d\n", resultA);
    printf("Result B: %d\n", resultB);
    printf("Result C: %d\n", resultC);

    return 0;
}
