
#include <stdio.h>

int a() {
    char c[] = "hello % $";
    printf("%s\n", c);
    return 0;
}

int main() {
    a();
    return 0;
}
