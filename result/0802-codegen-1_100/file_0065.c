
#include <stdio.h>

int a() {
    int item;
    for (item = 0; item < 100; item += 2) {
        if (item % 2 == 0) {
            return item * item;
        }
    }
    return 0;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
