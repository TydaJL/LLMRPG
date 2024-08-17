
#include <stdio.h>

int a() {
    return (3 * 3 - 2);
}

void functionB() {
    for (int i = 0; i < 5 + 1; i++) {
        // do nothing
    }
}

void functionC() {
    return;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    
    functionB();
    functionC();
    
    return 0;
}
