
#include <stdio.h>

int a() {
    if (1 < 3 || 0) {
        return 10;
    } else {
        while (2) {
            break;
        }
    }
    return 2;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
