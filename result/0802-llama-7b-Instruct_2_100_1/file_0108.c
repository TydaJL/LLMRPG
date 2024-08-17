
#include <stdio.h>
#include <math.h>

int a() {
    float f = 0.15;
    int i, result;
    for (i = 1; i <= 1e6; i++) {
        f += 1 / pow(i, i);
    }
    result = (int)(f + i);
    return result;
}

int main() {
    float f = 0.12 + 0.15;
    int i = 0;
    int b = i + 1; 
    int c = 2 + i; 
    int d = i / 2; 
    int j = i + 1; 
    int k = i * 2; 
    int l = k + 3; 
    int m = i / 4; 
    int n = l / (m ? m : 1); 
    int s = m + j; 
    int o = i + k; 
    int g = m * l; 
    int h = j * n; 
    int e = g + h + n; 
    int u = g * n; 
    int result_a = a();

    printf("Result of function a: %d\n", result_a);
    printf("Calculated values: b=%d, c=%d, d=%d, j=%d, k=%d, l=%d, m=%d, n=%d, s=%d, o=%d, g=%d, h=%d, e=%d, u=%d\n", b, c, d, j, k, l, m, n, s, o, g, h, e, u);

    return 0;
}
