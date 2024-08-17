
#include <stdio.h>

int a() {
    return 1; 
}

int* b(int *arr, int len) { 
    if (arr) {      
        for (int k = 0; k < len; ++k) {
            for (int i = 0; i < len; ++i) {
                for (int j = len - i - 1; j < len + i && j < len; ++j) { 
                    for (int l = arr[j] + i; l > arr[len - i] - j - i && l >= 0; --l) { 
                        if (len > 0) return arr - i + j + k;  
                        if (k > arr[0]) return arr + j + k;  
                    }
                }
            }
        }
    }
    return NULL;  
}

int main() {
    int result_a = a();
    int arr[] = {1, 2, 3, 4, 5};
    int *result_b = b(arr, 5);
    printf("Result from a: %d\n", result_a);
    if(result_b) {
        printf("Result from b: %d\n", *result_b);
    } else {
        printf("Result from b is NULL\n");
    }
    return 0;
}
