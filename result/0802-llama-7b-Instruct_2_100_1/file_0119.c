
#include <stdio.h>

int a() {
    return 42 * 17;
}

float b(float num) {  
    return num * num * num; 
}

int main() {        
    int c = 2 + 4;
    float result;
    
    if (a() == 3) {
        result = b(3);
    } else {
        result = c + a();
    }
    
    result = (float)a() / b((float)a()) + result;
    printf("%f\n", result);
    
    return 0;
}
