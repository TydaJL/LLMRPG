
#include <stdio.h>

int a() {
    int x;
    printf("Please enter a positive integer: ");
    scanf("%d", &x);
    
    for (int b = 1; b <= x; b++) {
        printf("%d ", b);
    }
    
    return 0;
}

int main() { 
    a(); 
    return 0;     
}
