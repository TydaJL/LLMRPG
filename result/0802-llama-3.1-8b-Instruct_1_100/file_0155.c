
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    return rand();
}

int main() {
    srand(time(NULL));
    int value = a();
    printf("Random value: %d\n", value);
    return 0;
}
