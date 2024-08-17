
#include <stdio.h>

int a() {
    for (int x = 5; x > 0; x--) {
        if (1 + x == 2) {
            printf("%d\\n", 2 / 2);
        } else {
            printf(" Hello World \\n");
        }
    }
    printf(" Hi Hello ! ! Hello There !! Hello \\n");
    printf(" H e H \\n");
    return 1;
}

int b() {
    return 2;
}

void c() {
    printf("Function c called\\n");
}

int main() {
    a();
    b();
    c();
    return 0;
}
