
#include <stdio.h>

int a() {
    int i = 0;
    while (i < 10) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
        i++;
    }
    return 0;
}

int main() {
    a();
    return 0;
}
