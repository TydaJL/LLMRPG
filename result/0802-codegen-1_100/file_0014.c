
#include <stdio.h>

void a() {
    int v[7][5] = {0};
    v[0][0] = 1 + 7;
    v[0][1] = 4;
    v[0][2] = 6;
}

int main() {
    a();
    return 0;
}
