
#include <stdio.h>

void a() {
    char i = 'A';
    while (i <= 'Z') {
        printf(" %c ", i);
        i++;
    }
}

int main() {
    a();
    return 0;
}
