
#include <stdio.h>

void a() {
    int var;
    for (var = 0; var < 10; var++) {
        printf("Current value: %d\n", var);
    }
}

int main() {
    a();
    return 0;
}
