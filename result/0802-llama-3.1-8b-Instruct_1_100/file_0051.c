
#include <stdio.h>
#include <string.h>

void a() {
    const char *str1 = " ab cd ";
    const char *str2 = "  c de #  f % !  @ ! !  $  g .  ";
    const char *str3 = "# a " "%  ";

    char *found1 = strstr(str2, str1);
    char *found2 = strstr(str3, str1);

    if (found1) {
        printf("String '%s' found in '%s'\n", str1, str2);
    } else {
        printf("String '%s' not found in '%s'\n", str1, str2);
    }

    if (found2) {
        printf("String '%s' found in '%s'\n", str1, str3);
    } else {
        printf("String '%s' not found in '%s'\n", str1, str3);
    }
}

int main() {
    a();
    return 0;
}
