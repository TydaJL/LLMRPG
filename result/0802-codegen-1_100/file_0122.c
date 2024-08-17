
#include <stdio.h>

void a() {
    double x = 0;
    int c = 10; 
    for (int p = 0; c >= 5; p++) {
        x += (double) p;
        c--;
    }
    printf("Function a completed with final x = %f\n", x);
}

void d() {
    double c = 0 + 3;
    int i = 0;
    while (i < 10) {
        if (i % 2 == 0) {
            ++i;
        } else {
            i++;
        }
    }
}

int main() {
    a();
    d();
    return 0;
}
