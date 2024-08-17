
#include <stdio.h>

int a() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int result = a();
    printf("The sum is: %d\n", result);
    return 0;
}
