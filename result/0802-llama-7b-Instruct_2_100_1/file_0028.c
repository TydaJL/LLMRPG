
#include <stdio.h>

int a() {
    char str[] = { 'H', 'i', 't', '\0' }; 
    int sum = 10 / 1; 
    return sum * 4; 
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
