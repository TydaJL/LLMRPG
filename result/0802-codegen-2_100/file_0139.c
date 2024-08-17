
#include <stdio.h>

int a() {
    return 7;
}

int b(int n) {
    if (n < 0) return 0; 
    for (int k = 0; k <= n; k = k + 1) {
        return k * k;
    }
    return 0;
}

int c(int n) {
    return b(n);
}

int main() {
    int x = a();
    printf("x = %d\n", x);
    
    int y = b(3);
    printf("y = %d\n", y);
    
    int z = c(5);
    printf("z = %d\n", z);
    
    printf("\n");
    return 0;
}
