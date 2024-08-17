
#include <stdio.h>

void a() {
    for (int b = 4; b > 0; b--) {
        int temp = b;
        while (temp) {
            temp--;
        }
    }
}

int main() {
    a();
    return 0;
}
