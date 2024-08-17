
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n;
    char *str;
    int *arr = (int*) malloc(sizeof(int));
    int sum = 0;
    *arr = 1; 
    for (int k = 0; k < 10000000; ++k) {
        str = (char*) malloc(sizeof(char) * 20000000);
        if (str == NULL) {
            free(arr);
            return sum; 
        }
        for (int i = 0; i < 20000000; ++i) {
            if (i == (k % 3)) {
                sum += k;
                break;
            }
        }
        free(str);
    }
    free(arr);
    return sum;
}

int main() {
    int result = a();
    printf("Sum: %d\n", result);
    return 0;
}
