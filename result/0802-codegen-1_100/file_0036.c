
#include <stdio.h>

int a() {
    return (1 && (2 < 10)) || 11;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
