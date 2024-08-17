
#include <stdio.h>

void a() {
    char str[] = "abc";
    int len = sizeof(str) - 1;
    printf("The length of the string \'%s\' is %d\\n", str, len);
}

int main() {
    a();
    return 0;
}
