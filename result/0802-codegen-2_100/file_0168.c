
#include <stdio.h>

int a() {
    double c = 1;
    while (c < 10) {
        c++;
    }
    return (int)c;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
