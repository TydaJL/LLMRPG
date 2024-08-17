
#include <stdio.h>

void a() {
    char *p = " 012 $  ^  ";
    printf("%s\n", p);
}

int main() {
    a();
    return 0;
}
