
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* ptr = NULL;  
    int x = -1, y = 0;  
    int arr[] = {5, 2, 4, 3, 1};   
    double sum = 0;   
    int size = 5;
    
    for(int j = 0; j < size; j++) {
        if(arr[0] < arr[j]) {
            x = arr[j];
        } else {
            y += arr[j];
        }
    }
    
    ptr = (int *)calloc(2, sizeof(int));
    ptr[0] = x;
    ptr[1] = y; 
    sum -= ptr[1];
    free(ptr);
    
    return x + y + (int)(sum + y);  
}

int main(void) {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
