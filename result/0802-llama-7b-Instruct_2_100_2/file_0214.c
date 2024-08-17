
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i = 1, x = 10;
    while (i != 0) {
        x = x / i;
        if (x <= 0) break;
        i++;
    }
    return x;
}

int main() {
    int x = 10, y = 0;
    char z;
    char *q = (char *)malloc(20 * sizeof(char));
    if (q == NULL) {
        return 1;
    }
    
    for (; x >= 0; x--) {
        if (x % 3) {
        }
    }

    for (y = 0; y < 20; ++y) {
        z = (y + x) % 2 ? 'b' : 'c';
        q[y] = z;
    }
    
    printf("Value returned from function a: %d\n", a());
    printf("Allocated characters: %s\n", q);
    
    free(q);
    return 0;
}
