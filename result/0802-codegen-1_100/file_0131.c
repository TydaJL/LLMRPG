
#include <stdio.h>

int a() {
    int i = 0;
    int count = 0;
    for (i = 0; i < 10; ++i) {
        if ((i % 2) == 1) {
            continue;
        }
        count++;
    }
    return count;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
