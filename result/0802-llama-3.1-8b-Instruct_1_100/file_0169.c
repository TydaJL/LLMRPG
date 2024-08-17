
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    return rand() % 100;
}

int main() {
    srand(time(NULL));
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
