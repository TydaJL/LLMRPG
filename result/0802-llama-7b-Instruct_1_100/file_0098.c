
#include <stdio.h>

void a() {
    int result = 0;
    for (int i = 0; i < 10; i++) {
        result += i;
    }
    printf("Result of a(): %d\n", result);
}

int main() {
    a();
    return 0;
}
