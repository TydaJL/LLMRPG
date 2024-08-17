
#include <stdio.h>

void a() {
    for (double x = 0; x <= 3.0; x += 0.5) {
        printf("%f\n", x);
    }
}

int main() {
    a();
    return 0;
}
