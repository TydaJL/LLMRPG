
#include <stdio.h>

int a() {
    char b = 3; 
    char c = ' '; 
    char x = 12 + 4; 
    int y = 12 + 12 + 1 + 3; 
    x += 1 + 3 + 3 + 5 + 3; 
    int z = (3 + x) * x; 
    int w = z + y * x; 
    int u = z * y + w + x - y + z * x * x - x; 
    int p = 12 * x; 
    int r = x * y; 
    int v = (z + x) * u; 
    int m = z + u + w + x - y; 
    int s = (z * m) + z; 
    int k = s + z + y + m + w + u + z + x * z + y * z + u + z * w + x * u + w + x * x + z + u + x * x;
    return k;
}

int main() {
    printf("%d\n", a());
    return 0;
}
