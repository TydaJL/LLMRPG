
#include <stdio.h>

int a() {
    int i;
    int sum = 0;
    for (i = 1; i <= 20; i++) {
        sum += (i * i);
    }
    return sum;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
