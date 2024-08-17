
#include <stdio.h>

int a() {
    for (int x = 5; x > 2; x -= 2) {
        printf("%d ", x);
    }
    return 12 + (1 + 1);
}

int main() {
    a();
    return 0;
}
