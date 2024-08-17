
#include <stdio.h>

void a() {
    double arr[] = {5, 5, 7, 5, 1};
    int b = 0;
    int c = 0;
    int d = 0;
    for (int i = 0; i < 5; i++) {
        b += arr[i];
        c += i;
        d++;
    }
    printf("Sum: %.0f, Count: %d, d: %d\n", b, c, d);
}

int main() {
    a();
    return 0;
}
