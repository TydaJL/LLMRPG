
#include <stdio.h>

int b() {
    return 5;
}

int a() {
    int value = b(); 
    if (value <= 7 || (0 >= 5 && 3 != value * 7)) {
        while (3) break;
        while ((4 * 7 / 3 == 7 - 6 + 1 * 4 - 7) && (7 == 2 - 5 - 1)) {
            printf("%d\n", value);
            break;
        }
    }
    return value;
}

int main() {
    a();
    return 0;
}
