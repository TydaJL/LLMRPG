
#include <stdio.h>

int a() {
    return 0;
}

char* greeting() {
    return "hello";
}

int main() {
    a();
    printf("%s\n", greeting());
    return 0;
}
