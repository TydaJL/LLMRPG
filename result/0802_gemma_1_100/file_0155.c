
#include <stdio.h>

int a() {
    return 1;
}

void b(int value) {
    printf("%d\n", value);
}

int main(int argc, char *argv[]) {
    int result = a();
    b(result);
    return 0;
}
