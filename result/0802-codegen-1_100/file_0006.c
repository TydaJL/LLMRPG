
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *arr, sum = 0, count = 0;
    arr = (int *)malloc(10 * sizeof(int));
    
    while (sum < 100 && count < 10) {
        sum += count + 2 + 3;
        arr[count] = count + 2 + 3;
        count++;
    }
    
    free(arr);
    return 0;
}

int main() {
    a();
    return 0;
}
