
#include <stdio.h>

void a() {
    char str[] = "Function a called";
    printf("%s\n", str);
}

void b() {
    char str[] = "Function b called";
    printf("%s\n", str);
}

int main() {
    a();
    b();
    return 0;
}
