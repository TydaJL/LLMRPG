
#include <stdio.h>

void a() {
    char *str1 = " abc ";
    char *str2 = " b ";
    char *str3 = " a ";
    printf("%s%s%s\n", str1, str2, str3);
}

int main() {
    a();
    return 0;
}
