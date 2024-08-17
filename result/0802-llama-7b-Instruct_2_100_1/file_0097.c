
#include <stdio.h>

int a() {
    char b = 10; 
    char c = a();
    char d = b * c + c / b * a() * (c % b - b % a());
    int e = (c * d - b + a()) / c; 
    char f = '\n';
    char g = c + f - d + b / e + f - b * a(); 
    int k = b * a() * (c + e - g) * (d + f - b + g); 
    int j = (b * k - f + c) / c + g + e + d + a() / f; 
    char l = (c + e + d) / c * a();
    double n = l * k + e * k + b * g + j * a() / c + d * f - b / e - f * a();
    float o = l * j; 
    return o;
}

int main() {
    a();
    return 0;
}
