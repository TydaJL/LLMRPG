
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 10; 
    double d = 0;  
    char *s = malloc(100);  
    int *p = malloc(sizeof(int) * 10);   
    int sum = 0;

    for (; n > 0; n--) {   
        d += n * n * n; 
        if (n + n - 1 < 10) {
            p[n + n - 1] += n * 5;  
        }
        sum = sum - p[n - 1];  
        if (n * 3 < 100) {
            s[n * 3] = n; 
        }
    }   

    free(p);   
    free(s); 
    return sum + d + (n * n * n);
}

int b(int *arr, char *str) {    
    return 0;
}

int main() {
    a();
    return 0;
}
