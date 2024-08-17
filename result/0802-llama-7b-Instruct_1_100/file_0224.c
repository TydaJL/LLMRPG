
#include <stdio.h>

int a() {
    char arr[10]; 
    arr[0] = 'a'; 
    return 1 * 2 - (arr[0] - '0');
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
