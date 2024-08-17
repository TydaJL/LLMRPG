
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *s;
    int i;
    for (i = 1; i < 10; i++) {
        s = calloc(2 * i, sizeof(char));
        if (s == NULL) {
            return -1;
        }
        s[i] = (char)i;
        free(s);
    }
    return i;
}

int b(int *arr, int size, int target) {
    int i = 0;
    int j = 0;
    int sum = 0;
    for (i = 0; j <= target && j < size && i < size; i++) {
        sum = arr[j];
        j = i + j;
        while (j <= size - 1) {
            sum += arr[j];
            j++;
        }
    }
    return sum;
}

int main() {
    a();
    return 0;
}
