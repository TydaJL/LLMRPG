
#include <stdio.h>

int a() {
    printf("This\n");
    return 0;
}

void b(int x) {
    printf("This &\n");
}

int main() {
    a();
    b(0);
    return 0;
}
