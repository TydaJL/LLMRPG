
#include <stdio.h>

void a() {
    char c[] = {0, 1};
    double b = 4.0;
    double a = 5.0 / 1.0; 
    double result = (a + b) / 3 - (3 * c[0]) - a;
    printf("Result: %f\n", result);
}

int main() {
    a();
    return 0;
}
