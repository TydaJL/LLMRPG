
#include <stdio.h>

int a() {
    int i; 
    int x = 0; 
    i = x; 
    return i + 1; 
}

float b() { 
    float f = 3.4; 
    float x = 0.1; 
    float y = -0.5; 
    f += (x - y); 
    return f * 2.0; 
}

float g() { 
    int x = -1; 
    for (int y = 1; x != -5; y = y * 2) { 
        x *= y; 
        if (x == -5) { 
            x += 1; 
            break; 
        } 
    } 
    return x; 
}

double c() { 
    return (double)a() * b() + g(); 
}

int h() { 
    double d = 3.0; 
    d = (d > 3.2 ? d : 2.3); 
    if (d * 3.4 == c() && d >= 6.8 && ((int)d % 2) != 1) { 
        d -= 1; 
        return 1; 
    } 
    return 0; 
}

int main() { 
    printf("a() = %d\n", a()); 
    printf("b() = %f\n", b()); 
    printf("g() = %f\n", g()); 
    printf("c() = %f\n", c()); 
    printf("h() = %d\n", h()); 
    return 0; 
}
