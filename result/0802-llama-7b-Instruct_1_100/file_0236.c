
#include <stdio.h>
#include <stdlib.h>

int a() {
    int res = 0, i;
    for (i = 0; i < 10; i++) {
        res += i;
    }
    return res;
}

int main() {
    int result = a();
    printf("The result is: %d\n", result);
    return 0;
}
