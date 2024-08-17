
#include <stdio.h>

void a() {
    int vec[50]; 
    float f = 0.0; 
    long x[20] = {0}; 
    float *fp[10];
    
    for(int i = 0; i < 10; i++) {
        vec[i + 20] = f; 
        fp[i] = &f; 
    }
    
    if (vec[20] == x[0]) {
        printf("Condition met\n");
    }
}

int main() {
    a();
    return 0;
}
