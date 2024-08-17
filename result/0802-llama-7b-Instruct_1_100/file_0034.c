
#include <stdio.h>

int a() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int result = a();
    printf("The sum of the first 10 natural numbers is: %d\n", result);
    return 0;
}
