
#include <stdio.h>
#include <math.h>

int a() {
    int x; 
    x = (int) sqrt(sqrt(3.0) / 10 + 2 * (sqrt(sqrt((sqrt(sqrt(3.0) / 10 + 4 * (sqrt((sqrt(3.0) / 10 + 2 * (sqrt(sqrt(sqrt(3.0) / 10 + 4 * (sqrt(sqrt(3.0) / 10 + 2 * sqrt(sqrt(sqrt(3.0) / 10 + 2 * sqrt(sqrt(sqrt(3.0) / 10)))))))))))))))));
    return x;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
