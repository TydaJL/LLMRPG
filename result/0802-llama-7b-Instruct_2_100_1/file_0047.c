
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char *x = malloc(10);
    if (x == NULL) return -1;
    strcpy(x, "test");
    while (1 < strlen(x)) { }
    free(x);
    return 3; 
}

int c() {
    int x = strlen("  ");
    while (3 + x == 4) x = 0;
    x = a();
    while (2 < x) x = 1;
    return x; 
}

int b() { 
    int i = 0;  
    while (i < 10) { 
        i++;  
    }   
    return c(); 
}

int main(void) {  
    int x = b();  
    int y = x;  
    while (!(x < y)) { x = y; x = y; } 
    return x;  
}
