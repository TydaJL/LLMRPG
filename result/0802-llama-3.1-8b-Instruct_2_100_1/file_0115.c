
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    double x = 0;
    int i = 0, y = -1;
    char z = 'A';
    int arr[3] = { -1, -1, 2 };
    while (x > -1e-6 && i < arr[0] + 1) {
        y += 2 * arr[(i + 1) % (sizeof(arr) / sizeof(*arr))];
        z *= z;
        if (z == 'A') break;
        i += 2;
        x = sin(x);
    }
    if (!y) return y;
    else return y - z + z * z;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
