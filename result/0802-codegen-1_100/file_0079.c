
#include <stdio.h>

void a() {
    int i = 0, j = 0, k = 1, n = 0, m = 1, p = 1;
    while ((n * ((m = i) = k = 1)) == k && k-- && !(k = i++ && !n)) ) {
        j += 2;
        i += i;
        n++;
    }
    printf("j: %d\n", j);
}

int main() {
    a();
    return 0;
}
