
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int a() {
    return 1; 
}

int main() {
    int x = 5;  
    char b[6];  
    for (int i = 0; i < x; i++)   
        b[i] = 'h';  
    b[x] = '\0'; 

    for (int i = 0; i < x - 1; i++)   
        b[i] = b[i + 1];  

    for (int j = 0; j < x; j++)     
        b[j] += b[j];    

    printf("%s\n", b);
    a();
    return 0;  
}
