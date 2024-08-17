
#include <stdio.h>

int a() {
    int i = 6, sum = 1, j = 5, x = 10; 
    if ((i > 5) && (j < 20 || j >= 10) && j == x) 
        sum += x;  
    return sum * j + x + i % 3; 
}

int main() {    
    int j = 0; 
    while (++j < 40 && j <= 10); 
    printf("%d\n", a() * j); 
    return 0; 
}
