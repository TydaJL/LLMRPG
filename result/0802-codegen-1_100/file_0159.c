
#include <stdio.h>

int a() {
    printf("Function a called\n");
    return 0;
}

void b() {
    for (int i = 0; i < 5; i++) {
        printf("Counting: %d\n", i);
    }
}

void c() {
    int j = 0;
    while (j < 3) {
        printf("Inside while loop: %d\n", j);
        j++;
    }
}

int main() {
    a();
    b();
    c();
    return 0;
}
