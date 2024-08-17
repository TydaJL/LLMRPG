
#include <stdio.h>

int a() {
    return sizeof(char) - !sizeof(!" a "[&! "#  "#]);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
