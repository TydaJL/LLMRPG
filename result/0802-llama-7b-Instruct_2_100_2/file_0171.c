
#include <stdio.h>

int a() {
    int i = 2;
    int b = -5;
    int x = 4;
    int y = x / i + b + x * x + b * x;
    return x * b * y;
}

int main() {
    int z = 10 / a() + 1;
    int b = -5;
    int c = 2 + z * z + z - 2 * z;
    if (a() >= 3) 
        if (z == a() - 10 && z > 0) 
            return c;
    printf("%d * %d \\ %d = %d\n %d / %d * %d = %.2f\n", z, z, a() + z - c - b / z, c + c + z, b, z, a() + z);
    return 0;
}
