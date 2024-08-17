
#include <stdio.h>
#include <stdlib.h>

int a() {
    int a_value = 0; 
    return a_value + 1; 
}

int main() {
    int i = 1; 
    int j = 10;   
    int *k;  
    k = malloc(j * sizeof(int)); 
    if (!k) exit(3);   
    for (int l = 0; l < j; l++) { 
        k[l] = l * a();   
    }    
    for (int l = 0; l < j; l++) {
        printf("%d ", k[l]);
    }
    printf("\n");
    free(k);     
    return 0; 
}
