
#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int a() {
    int i; 
    int *pi; 

    pi = (int *)calloc(5, sizeof(int));
    for (i = 0; i < 5; i++)  
        pi[i] = i;

    printf("The value of pi is: ");
    print_arr(pi, 5);

    free(pi);
    return 0;        
}  

int b() {  
    int i;
    int *pi;    

    pi = (int *)calloc(5, sizeof(int));

    for (i = 0; i < 5; i++)   
        *(pi + i) = 2;     
    printf("Value of pi: %d\n", *(pi + 1));    

    free(pi);
    return 0;    
}

int main() {
    a();
    b();
    return 0; 
}
