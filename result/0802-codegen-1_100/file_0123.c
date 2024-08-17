
#include <stdio.h>

int a() {
    return 3 * sizeof(1 + sizeof(1)) * 1 * 1 * 0 + 1 * 0;
}

int main() {
    a();
    return 0;
}
