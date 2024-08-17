
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    int randomValue = rand() % 100;
    if (randomValue % 2 == 0) {
        printf("Even: %d\n", randomValue);
    } else {
        printf("Odd: %d\n", randomValue);
    }
    return randomValue;
}

int main() {
    srand(time(NULL)); 
    a();
    return 0;
}
