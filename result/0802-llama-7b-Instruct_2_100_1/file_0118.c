
#include <stdio.h>

int a() {
    char b[50]; 
    float c = 0.0; 
    float d = 3.12; 
    double e = -7.77; 
    int f; 
    f = (int)(d + c) * (int)e; 
    return f * 12; 
}

int main() { 
    int result = a(); 
    printf("\n\nThe result is %d\n\n\n", result); 
    return 0; 
}
