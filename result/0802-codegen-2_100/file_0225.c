
#include <stdio.h>

int a() {
    int x = 0; 
    for (int i = 0; i < 10000; i++) 
        x += i * i + i; 
    return x;
}

int b() {
    int sum = 0; 
    for (int i = 0; i < 1000; i++)    
        sum += i * i + i;  
    return sum; 
}

int c() { 
    int sum = 0, i;   
    for (i = 0; i < 1000; i++)  
        sum += i * i + i;        
    return sum;
}

int main() {
    int z = 0, j; 
    z = a();
    j = b();
    printf("Result from a(): %d\n", z);
    printf("Result from b(): %d\n", j);
    printf("Result from c(): %d\n", c());
    return 0;
}
