
#include <stdio.h>

int a() {
    return 5;
}

int b() {
    return 10;
}

int c() {
    return a() + b();
}

int main() {
    int sum = c();
    printf("The sum is: %d\n", sum);
    return 0;
}
