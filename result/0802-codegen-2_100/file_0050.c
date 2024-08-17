
#include <stdio.h>

int a() {
    for (int n = 0; n < 1000; n++);
    return 0;
}

int main() {
    a();
    return 0;
}
