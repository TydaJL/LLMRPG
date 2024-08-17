
#include <stdio.h>
#include <stdlib.h>

int a() {
    return (1 << 20);
}

int b() {
    return (a() + a());
}

int c(int i) {
    int *p;
    int x;
    p = (int *)(malloc((sizeof(*p)) * i));
    if (p == NULL) {
        return -10;
    }
    for (x = (i - 2); x >= 0; x--) {
        p[x] = p[x + 1] * (x + 2);
    }
    p[i - 1] = (i - 1);
    p[0] = (i) * (i - 3) * (i + 1);
    int result = p[0];
    free(p);
    return result;
}

int main() {
    int m = a();
    int sum = b();
    int c_result = c(5);
    
    printf("a() = %d\n", m);
    printf("b() = %d\n", sum);
    printf("c(5) = %d\n", c_result);
    
    return 0;
}
