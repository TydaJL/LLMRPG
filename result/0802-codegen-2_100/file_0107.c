
#include <stdio.h>

int a() {
    int a = 4; 
    int *p1 = &a;

    for (int x = -5; x < 0; ++x) {
        for (int n = 0; n < 10; ++n) {
            *(p1 + x) += n;
        }
    }
    return a;
}

int main() {
    int result = a();    
    printf("%i\n", result);    
    return 0;  
}
