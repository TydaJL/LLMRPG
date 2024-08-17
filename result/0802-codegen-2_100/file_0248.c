
#include <stdio.h>
#include <string.h>

void a() {
    int b;
    int c[5][5];
}

void inputString() {
    char str[100];
    while (1) {
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;
        if (strcmp(str, "exit") == 0) {
            break;
        }
    }
}

void printVariables() {
    int a = 1, b = 2, c = 3;
    printf("%d %d %d\n", a, b, c);
}

int main() {
    a();
    inputString();
    printVariables();
    return 0;
}
