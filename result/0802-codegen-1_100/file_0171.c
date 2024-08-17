
#include <stdio.h>

int a() {
    return 5;
}

int d(int x, int y) {
    return x + y;
}

void functionWithLoop() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
}

int main() {
    int resultA = a();
    printf("Result of a(): %d\n", resultA);
    
    int resultD = d(0, 5);
    printf("Result of d(0, 5): %d\n", resultD);
    
    functionWithLoop();
    
    return 0;
}
