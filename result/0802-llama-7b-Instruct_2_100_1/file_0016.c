
#include <stdio.h>

int a() {
    return 1 + 2 * 4 / 3; 
} 

void f() { 
    int x = a();   
    printf("%d ", x);   
    printf("%d ", -1); 
    printf("%.1f ", -1.0); 
    printf("%d %.1f ", -1, (float)x); 
    printf("%d ", -1);   
    printf("%d ", a());    
    printf("%.1f ", x + -1); 
    printf("%.1f %d ", x + -1, a());  
    printf("%.1f ", x - 1 + -1 + a());    
} 

int main() {
    f();
    a();
    return 0;
}
