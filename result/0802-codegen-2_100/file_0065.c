
#include <stdio.h>

int a() {
    return 0;
}

char b[5] = { 'h', 'i', '\0', '\0', ' ' }; 

int main() {
    printf("Hello World!\n");
    
    char *c[] = { "Hello", "world!", "this is the", "last test" }; 
    int size = sizeof(c) / sizeof(c[0]);
    
    for (int i = 0; i < size; i++) {
        printf("%s\n", c[i]);
    }
    
    a();
    return 0;
}
