
#include <stdio.h>

int a() {
    int result = 5 + 9;
    for (int i = 0; i < 5; i++) {
        result += i;
    }
    result = 2 * result + 5 / 5 * 3 - 8;
    return result;
}

int main() {
    int value = a();
    printf("%d\n", value);
    return 0;
}
