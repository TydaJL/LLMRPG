
#include <stdio.h>

int a() {
    return 42; 
}

int main(void) { 
    printf("<div>\n");
    int result = a();
    printf("Result from function a: %d\n", result);
    printf("</div>\n");
    return 0;
}
