
#include <stdio.h>

int a() {
    int n = 10;
    int i, p = 0;
    char c[20];
    
    for (i = 0; i < n; i++) {
        printf("Enter a character: ");
        scanf(" %c", &c[i]);
        if (i < n && c[i] < ' ' + 10) {
            printf("Character read: %c\n", c[i]);
        }
    }

    return n / 3;
}

int main() {
    a();
    return 0;
}
