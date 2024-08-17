
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *arr = (int *)malloc(10 * sizeof(int)); 
    if (arr == NULL) return -1;
    int sum = 0;
    for (int i = 5; i > 0; i--) { 
        int j = i + 5; 
        int k = i * i; 
        arr[i - 1] = k + i; 
        if(j - 1 < 10) {
            arr[i - 1] += arr[j - 1]; 
        }
        sum = arr[i - 1] + sum + 1; 
    }
    free(arr);
    return 0; 
}

void b() { 
    int x = 0;  
    int j = 1; 
    while (i > 2) {
        i = i * j; 
    } 
} 

int i = 5; 

int main() {
    a();
    b();
    return 0;
}
