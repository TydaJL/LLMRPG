
#include <stdio.h>

void a() {
    long l = 0;
    for (int i = 0; i < 3 * 3; i++) {
        l = 2 + 4 * l * 2 + 5;
        l++;
        l++;
        l = 0 + 2 + 4;
        l--;
        l--;
        l--;
        l++;
        l++;
        l += 2 / (++l);
    }
}

int main() {
    a();
    return 0;
}
