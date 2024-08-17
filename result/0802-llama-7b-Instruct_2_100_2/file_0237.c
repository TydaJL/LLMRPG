
#include <stdio.h>

int a() {
    int i = 1, a = 0; 
    return a + (i = i + i); 
}

double b(double b, int x) { 
    return b + (b = x - x); 
}

double c(double c) { 
    double a = 1.; 
    return c * a; 
}

long d(char a, float b, double c, int x, short e) { 
    long f = 10; 
    return f + (a - b / c * (x + e)); 
} 

char g(short a, short b, unsigned char e, int f, char g) { 
    return a * b % e + e * f / g; 
}

char h(short b, int c, float e, unsigned char f, unsigned short g) { 
    return b + (c - b / e + f % g); 
}

int l(unsigned short d, float e, short a, int f, double g) { 
    return d + (int)e + a + f; 
}

int main() {
    int result_a = a();
    double result_b = b(0.0, 5);
    double result_c = c(10.0);
    long result_d = d('a', 5.0f, 10.0, 2, 3);
    char result_g = g(5, 10, 255, 20, 'b');
    char result_h = h(10, 20, 2.5f, 5, 15);
    int result_l = l(10, 5.0f, 2, 3, 1.5);

    printf("Result of a: %d\n", result_a);
    printf("Result of b: %lf\n", result_b);
    printf("Result of c: %lf\n", result_c);
    printf("Result of d: %ld\n", result_d);
    printf("Result of g: %d\n", result_g);
    printf("Result of h: %d\n", result_h);
    printf("Result of l: %d\n", result_l);

    return 0;
}
