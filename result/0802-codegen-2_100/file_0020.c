
#include <stdio.h>

int a() {
    int b;
    int sum = 2;
    for (b = 0; b < 10; b++) {
        sum = sum + b;
    }
    return sum;
}

int main() {
    printf("The sum is %i\n", a());
    return 0;
}
