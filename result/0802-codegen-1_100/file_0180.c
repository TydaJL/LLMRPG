
#include <stdio.h>

int a() {
    char *str[] = {"Hello", "World", NULL};
    for (int i = 0; str[i] != NULL; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}

void g(int arg) {
    printf("Function g called with argument: %d\n", arg);
}

void h() {
    printf("Function h has been called.\n");
}

int main() {
    a();
    g(10);
    h();
    return 0;
}
