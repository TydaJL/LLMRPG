
#include <stdio.h>

int a() {
    int b = 'A' + 'B' + 'C';
    return b;
}

int main() {
    int result = a();
    printf("The result is: %d\n", result);
    return 0;
}
