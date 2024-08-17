
#include <stdio.h>

int a() {
    return 0; 
}

double b(double b) {     
    return b;    
}

double d(double c) {  
    c = c * c;     
    return c; 
}

int main(int argc, const char *arg[]) {
    int x; 
    double y; 

    x = a();       
    y = b(a());       
    d(a());  
    printf("%f %f %f %d %f %f %f %f %f %f %f %f %f\n", 
           b(a()), d(y), y, x, y, y, d(y), y, d(b(x)), b(d(y)), b(a()), b(a()), b(d(d(y))));
    return 0;
}
