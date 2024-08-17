
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    return rand() % 100;
}

void print_message() {
    printf("abc def\n");
}

int main() {
    srand(time(NULL));
    int result = a();
    printf("Random number: %d\n", result);
    print_message();
    return 0;
}
