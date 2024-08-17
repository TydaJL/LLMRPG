
#include <stdio.h>
#include <string.h>

int a() {
    const char* str = " abc de ";
    int length = strlen(str);
    printf("Length of string: %d\n", length);
    return length;
}

int main() {
    a();
    return 0;
}
