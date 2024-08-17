
#include <stdio.h>

void a() {
    for (int i = 0; i < 5; i++) {
        printf("Function a called %d times\n", i + 1);
    }
}

int main() {
    a();
    return 0;
}
