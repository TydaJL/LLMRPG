
#include <stdio.h>

int a() {
    return 1;
}

void b(float x) {
    float result = x * 3.0 + 2;
    printf("Result from b: %f\n", result);
}

int main() {
    int c = a();
    float e = 1.0, g = 1.0, h = 1.0, f = 1.0, j = 1.0;
    float d = e + f + g * h;
    char *str = "hello world";
    
    printf("String: %s\n", str);

    for (int x = a(); x; x = a()) {
        x = x + x + 1;
        if (x * x == x) break;
        while (x) {
            break;
        }
    }

    int result = a() - 1;
    printf("Result: %d\n", result);

    b(2.0);

    return 0;
}
