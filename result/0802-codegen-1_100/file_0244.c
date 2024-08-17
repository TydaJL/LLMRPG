
#include <stdio.h>

int a() {
    int err = 0;      
    err += 2 - (err < 1) * 0 + 2 % 3 - (err < 1) ^ (3 * 0);
    return err;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
