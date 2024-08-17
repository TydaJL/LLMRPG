
#include <stdio.h>

int a() {
    return (5 - 4 - 4 / 3 / (2 % 5) * (3 > 4 && 2 <= 5 && 7 - 6 >= 8) % 4 != 2 || 5 != 2 ? !( ! 1) : 0 == 1 && 5 && 0 ? !0 : 1 && 1);
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
