
#include <stdio.h>

void a() {
    float z[6] = {0};
    for (int i = 0; i < 6; i++) {
        z[i] = (i + 1) * 2 + 1;
        printf("z[%d] = %f\n", i, z[i]);
    }
}

int main() {
    a();
    return 0;
}
