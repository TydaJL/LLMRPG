
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    int x;
    for (x = 1; x < 100; x += 2) {
        return (x * x);
    }
    return 0;
}

int main() {
    int y;
    y = b();
    printf("The value is : %2d\n", y);
    printf("\n\n\n\n\n\n");
    return 0;
}
