
#include <stdio.h>

int a() {
    int x = 5;
    int y = 10;
    int sum = x + y;
    return sum;
}

int main() {
    int result = a();
    printf("The sum is: %d\n", result);
    return 0;
}
