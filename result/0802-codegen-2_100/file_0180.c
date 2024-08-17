
#include <stdio.h>

int a() {
    printf("hello\n");
    return 5; 
}

int main(void) {
    printf("%d\n", a()); 
    getchar();
    return 0;  
}
