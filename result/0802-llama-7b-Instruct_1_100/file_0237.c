
#include <stdio.h>

int a() {
    int result = 0;
    for (int i = 0; i < 5; i++) {
        result += i;
        if (result != 0 && result != 1 && result != 7) {
            if (i == 2) {
                result -= 5;
            }
            if (i != 4) {
                if (i == 5) {
                    result += 1;
                } else {
                    result += 1;
                }
            }
        }
    }
    return result;
}

int main() {
    int res = a();
    printf("Result: %d\n", res);
    return 0;
}
