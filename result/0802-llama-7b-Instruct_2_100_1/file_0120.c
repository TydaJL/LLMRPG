
#include <stdio.h>

int a() {
    float f = 2.3; 
    for (float i = 0.4; i > 0.; i -= 0.4) {
        f += 0.4;
    } 
    return (int)f;
}

int b() {
    return 5; 
}

float c() {
    return (float)b();
}

int d() {
    return (int)c();
}

float f() {
    float result = a();
    return result;
}

int main() {
    printf("%d\n", d());
    printf("%.0f\n", f());
    return 0;
}
