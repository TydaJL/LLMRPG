
#include <stdio.h>

int a() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Function a is called.\n");
    }
    return 0;
}

int main() {
    a();
    return 0;
}
