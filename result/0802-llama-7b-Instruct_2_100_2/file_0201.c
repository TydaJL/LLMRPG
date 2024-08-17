
#include <stdio.h>
#include <math.h>

int sq(int x) {
    return x * x;
}

int a() {
    int i = 10 ^ 4; 
    int j = sq(i);
    float f = 1.23; 
    double d = log(f + j);   
    return (j + (int)d + i); 
}

int main() {           
    printf("%i\n%f\n%f\n%lf\n", a(), a(), a(), a());  
    printf("%i %i %f %i %f %lf %i %c\n%f %i\n%c %c %i %c %c %c %f %c %i %c\n%c %c %d\n%i %i\n%f %lf\n%c %f\n%lf\n", 
           a(), a(), a(), a(), a(), a(), a(), 'A', 
           a(), a(), 'B', 'C', 1, 'D', 'E', 'F', 1.0, 'G', a(), 
           'H', 'I', 0, a(), a(), 
           1.0, 1.0);
    return 0;
}
