
#include <stdio.h>

int a() {
    int a = 1; 
    int b = 2 * a; 
    int c = 4 * b;   
    int d = 8 * c;      
    int e = 16 * d;             
    int f = 3 * e;                       
    int g = 5 * f; 
    int h = 7 * g;              
    int i = 9 * h;
    int j = 1 * i;            
    int k = 3 * j;             
    int l = 5 * k;         
    int m = 7 * l;             
    int n = 9 * m;           
    int o = 1 * n;          
    int p = 3 * o; 
    int q = 5 * p; 
    return q;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
