
#include <stdio.h>
#include <stdlib.h>

int a() {
    int c = 2;
    int b = 1 + (int)(3. / 6. + 2. * 1 / 2 * 3. / 4 * 5 / 6 / 7 + 8 * 9 * 1 * 2 * 3);
    return c + a() + c;
}

int main() {
    int x = 3;
    int *d = calloc(x * x, sizeof(int));
    if (d == NULL) {
        return 1;
    }
    for (int z = 1; z < x * x; z++) {
        d[z * z + z * z] += z * z;
        d[z - z] = x + x - z - x + x + z - z + z + x + x;
    }
    free(d);
    a();
    return 0;
}
