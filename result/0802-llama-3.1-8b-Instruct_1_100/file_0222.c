
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    return rand();
}

int main() {
    srand(time(NULL));
    int result = a();
    printf("Random number: %d\n", result);
    return 0;
}
