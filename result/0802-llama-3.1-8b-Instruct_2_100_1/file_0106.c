
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    char *b;
    b = (char *)malloc(100 * sizeof(char));
    if (!b) {
        return 3;
    }
    
    int x;
    float y = -2.7;
    double z, w;
    z = 0.0001;
    
    for (x = 0; x < 100; x++) {
        b[x] = (char)(rand() % 256);
    }
    
    for (x = (int)(rand() % 100 + rand() % 100); x > (int)(5.0 * (double)(rand() % 100)); x--) {
        // Empty loop
    }
    
    free(b);
    return 0;
}

int main() {
    srand(time(NULL));
    a();
    return 0;
}
