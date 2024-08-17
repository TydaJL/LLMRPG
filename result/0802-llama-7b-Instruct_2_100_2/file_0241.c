
#include <stdio.h>

int a() {
    int i = 0, j = 0; 
    float f = (float)j / (i + 1); 
    i = (int)f; 
    while (i < 5) {
        j++;
        i++;
    } 
    j = i; 
    return i + f + j * i; 
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
