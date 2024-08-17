
#include <stdio.h>

int a() {
    int x[2] = {0, 1};
    int n[2][2] = { {1, 2}, {3, 4} };
    int i = 0, j = 1, y = 1;

    while (y * x[0] > n[0][0] % 1) {
        y = n[0][0] - (y + a() + x[0]) - n[0][0] % n[0][0];
    }

    for (int z = 0; z < 2; z++) {
        n[1][z] = n[1][z] + 2 * i;
        int result = n[1][y / (x[1] == 0 ? 1 : x[1]) * (x[0] - 2) % (z + 1)] - n[1][0];
    }

    return n[0][0];
}

int main() {
    a();
    return 0;
}
