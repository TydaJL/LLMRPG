
#include <stdio.h>

int a() {
    long arr[] = {1, 2};
    return (arr[1] / 5) + (arr[0] * 2) % 3;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
