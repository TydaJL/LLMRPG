
#include <stdio.h>

int a() {
    return 1; // Changed to return a constant value instead of recursively calling a()
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
