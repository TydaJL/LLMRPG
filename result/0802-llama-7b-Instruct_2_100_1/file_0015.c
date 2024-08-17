
#include <stdio.h>

int a() {
    double arr[4];
    for (int i = 0; i < 4; i++) {
        arr[i] = i * 2 + 5;
    }
    return 0;
}

double b_func() {
    return 0.0;
}

double e(void) {
    double g = 0, b = 1;
    for (int h = 1; h < 10; h++) {
        g += b;
        b *= h;
    }
    return g;
}

int main() {
    a();
    double b = b_func();
    int c = 4;
    while (c >= 0) {
        for (int d = 0; d < c; d++) {
        }
        c--;
    }

    c = 4;
    if (c < 3) {
    } else {
        if (c == 4) {
            int j = 5;
            j++;
            while (j < c) {
                j += c * 3;
                j = j * c + c * j * b;
            }
        } else {
        }
    }
    
    double result = e();
    printf("Result from e(): %lf\n", result);
    
    return 0;
}
