
#include <stdio.h>

int a() {
    int b = 10; 
    return b - 2; 
}

void b() { 
    int a = 10;    
    a += 10;  
    printf("value is %d\n", a);  
}

int main(void) {
    b();
    int result = a();
    printf("result from a() is %d\n", result);
    return 0;
}
