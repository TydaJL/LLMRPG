
#include <stdio.h>

int a() {
    float y = 0.0;
    while (++y) {
        if (y > 0) {
            y = -y;
        } else {
            break;
        }
    }
    return 0;
}

int main() {
    a();
    return 0;
}
