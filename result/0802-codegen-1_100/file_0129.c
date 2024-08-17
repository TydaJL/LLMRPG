
#include <stdlib.h>

int a() {
    return 4 + 7;
}

int d(int x) {
    return x * 2;
}

int main() {
    int result = a();
    int *f = (int*)malloc(2 * sizeof(int));
    if (f != NULL) {
        f[0] = result;
        f[1] = d(result);
    }
    free(f);
    return 0;
}
