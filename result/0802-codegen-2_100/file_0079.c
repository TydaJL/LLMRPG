
#include <stdio.h>

int a() {
    int b = 0;

    while (1) {
        b += 10;
        if (b == 100) {
            break;  
        }
    }

    while (b) {
        b -= 1;
        if(b <= 20) {
            break;
        }
    }   

    return b; 
}

int main() {  
    int result = a();
    printf("%d\n", result);
    return 0;    
}
