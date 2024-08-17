
#include <stdio.h>

void a() {
    char *x = "Hello from my code";
    printf("%s\n", x);
    
    double n[5] = {3, 5, 6.0, 5, 0}; 
    for(int i = 0; i < 5; i++) {
        printf("%f ", n[i]);
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
