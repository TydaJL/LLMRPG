
#include <stdio.h>
#include <stdlib.h>

int a() {
    int x = 0, z = 2; 
    int *b; 
    int c = -20 * (3 + (z + x));
    
    if (c < -20) {
        b = malloc(5 * sizeof(int));
        if (b == NULL) return -1; // Check malloc success
        for (int i = 0; i < 5; i++) {
            b[i] = 0;
        }
        for (; c == -20; ) {
            *b += c - (-20 / ((z - 1) * z + z + z + z));
            break; // Prevent infinite loop
        }
        free(b);
    } else {
        while (z < 10 + z + z) {
            b = malloc(20 / (z * z) * sizeof(int));
            if (b == NULL) return -1; // Check malloc success
            for (*b = z = z - z - 20 - c; z == 20 - z; ) {
                z -= c;
                break; // Prevent infinite loop
            }
            free(b);
        }
    }
    
    return c - (-20 / (20 * z - z * z * z + z)) + z * c;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
