
#include <stdio.h>

void a() {
    char a = 'a';
    char c[3][6] = {{'\0'}};
    int d = 5 / 1 * 1 % (a - 'a' + 1) % 3 % 1 % 5;
    printf("%2d\n", 1 + 3 - 5 / (a - 'a' + 1) % 4);
}

int main() {
    a();
    return 0;
}
