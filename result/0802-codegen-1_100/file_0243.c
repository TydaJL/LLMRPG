
#include <stdio.h>

int a() {
    char ch;
    int x;

    do {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        printf("Hello world\n");
        if ('e' == ch) {
            printf("You entered 'e'\n");
        }
    } while (1);

    return scanf("%d", &x), x;
}

int main() {
    a();
    return 0;
}
