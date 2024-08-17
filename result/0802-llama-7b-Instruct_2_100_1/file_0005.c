
#include <stdio.h>

int a() {
    char c = 0; 
    float f = (float)12 / 6; 
    int i = f + c; 
    f = (float)14 + f; 
    f = f * f; 
    return (int)(f + i);
}

int main() {
    int a_var = 0; 
    if (a_var >= 0 && a_var < 2) { 
        printf("true %i + %.2f\n", a_var, (float)a_var); 
    } else { 
        a_var = -2; 
    }
    int b = 3; 
    b = a_var * b + b; 
    int c = b;
    int arr_size = a_var + a_var; 
    int d = arr_size; 
    int a = -a_var + d; 
    int total = a + b + b + d;
    float f = (float)(total); 
    int result = (int)(total / f) + d; 
    int i = result + result; 
    int j = i + i; 

    a();
    return 0;
}
