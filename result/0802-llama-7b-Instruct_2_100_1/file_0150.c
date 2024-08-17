
#include <stdio.h>

int a() {
    char b = 65;
    for (; b <= 67; ++b);
    while (++b != 67);
    int i;
    for (i = 65; i < b; ++i);
    return i;
}

int c() {
    return 0;
}

int main() {
    for (;;) {
        a();
        c();
    }
    return 0;
}
