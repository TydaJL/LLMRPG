
#include <stdio.h>

int a() {
    int value = 0;
    int ptr = 0;
    if (ptr < 5) {
        return -ptr++;
    }
    return value;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
