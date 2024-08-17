
#include <stdio.h>

int a() {
    int x = 5;
    float b = 2 * x;
    if (x > b) {
        return 1;
    } else {
        return x;
    }
}

int main(int argc, char **argv) {
    int arr[5] = {0, 1, 2, 3, 4};
    float b = arr[0];  
    int i = 5 * b + argc - 1;  
    float c = argc * argc * argc + 1.0 * argc / argc;  
    int d = (int)c;  
    while (d < (int)b) {
        d = (int)(c + b / d);
    }
    printf("%d\n", d);
    printf("%f\n", c);
    
    int res = a();
    printf("Result from function a: %d\n", res);
    
    return 0;
}
