
#include <stdio.h>

void a() {
    for (int n = 0; n < 2; n++) {
        printf("%d\n", n + (n % 2 == 0 ? 1 : 3));
        n++;
    }
}

int main() {
    a();
    return 0;
}
