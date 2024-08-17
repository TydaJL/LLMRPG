
#include <stdio.h>

void a() {
    if (1 + 2 != -5 % 2) {
        printf("Condition is true\n");
    } else {
        printf("Condition is false\n");
    }
}

int main() {
    a();
    return 0;
}
