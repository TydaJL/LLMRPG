
#include <stdio.h>

int a() {
    int i = 5;
    int sum = -10;
    sum = i * i;
    return sum;
}

int main() {
    int sum = a();
    printf("The sum of %d times %d is equal to %d\n", 5, 5, sum);
    return 0;
}
