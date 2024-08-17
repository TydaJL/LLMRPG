
#include <stdio.h>

int a() {
    int b = 4;  
    int c = 5; 
    return b + c;    
}     

int d = 1;

int main() {
    int x = 5;   
    float e = 2.7; 
    int i = a();  
    printf("i is %d\n", i);     
    int j = 5;    
    int k = j + 2;      
    printf("j is %d\n", j);  
    printf("k is %d\n", k);  
    return 0;
}
