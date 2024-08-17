
#include <stdio.h>
#include <string.h>

void a() {
    for (int j = 0; j < 10; j++) {
        printf("Iteration: %d\n", j);
    }
    
    char str[50];
    for (int i = 0; i < 5; i++) {
        sprintf(str, "ABC");
        if (strlen(str) != 3) {
            printf("Length mismatch: expected %d but got %lu\n", 3, strlen(str));
        }
    }
    
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c ", c);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Value: %.0f\n", (float)i);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("Integer: %d\n", i);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("Hex: %x\n", i);
        printf("Octal: %o\n", i);
    }
}

int main() {
    a();
    return 0;
}
