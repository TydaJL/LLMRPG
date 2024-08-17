
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    int randomValue = rand();
    printf("Random Value: %d\n", randomValue);
    return randomValue;
}

int main() {
    srand(time(NULL));
    a();
    return 0;
}
