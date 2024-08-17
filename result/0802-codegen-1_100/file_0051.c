
#include <stdio.h>

int a() {
    int size = 0;
    int n = 0;
    printf((size == 0 && n == 0) ? "Yes\n" : "No\n");
    return 0;
}

int b() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

int main() {
    a();
    b();
    return 0;
}
