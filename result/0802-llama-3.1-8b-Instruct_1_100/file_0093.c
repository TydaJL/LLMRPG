
#include <stdio.h>

void a() {
    int x = 0;
    x = ! ++x;
    x = --x;
    x = ~x;
    printf("%d\n", x);
}

int main() {
    a();
    return 0;
}
