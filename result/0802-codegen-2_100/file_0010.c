
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int a() {
    return 1;
}

int main(int argc, char **argv) {
    if (argc >= 2) {
        printf("\n");
    } else {
        printf("\n%s", argv[1]);
    }

    int result = a();
    printf("Result of a(): %d\n", result);

    char str[50] = "hello";
    strncat(str, " world", sizeof(str) - strlen(str) - 1);
    printf("Modified string: %s\n", str);
    
    return 0;
}
