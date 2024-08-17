
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    int x = rand() % 6 + 1;
    printf("Random number: %d\n", x);
    return x;
}

int main() {
    srand(time(NULL));
    a();
    return 0;
}
