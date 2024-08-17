
#include <stdio.h>

int a() {
    char c;
    while ((c = getchar()) != EOF) {
        if (c == 'a') {
            printf(" a ");
        }
        if (c == '\n') {
            break;
        }
    }
    return 0;
}

int main() {
    a();
    return 0;
}
