
#include <stdio.h>

const char* a() {
    return "I";
}

int main() {
    const char* result = a();
    printf("%s\n", result);
    return 0;
}
