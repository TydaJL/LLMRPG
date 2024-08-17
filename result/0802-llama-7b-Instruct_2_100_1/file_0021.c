
#include <stdio.h>

int a() {
    int i = 1; 
    int result =  i + i * (i +  i + i + (i -  i) * (i - i));
    for (i = 1; i <= 10; i++) { 
        if ((i + i) < 10)
            result = result * i * i;  
    }   
    return result; 
}

int main() {
    int result = a();
    printf("Result of function a: %d\n", result);
    return 0;
}
