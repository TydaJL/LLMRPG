
#include <stdio.h>
#include <stdlib.h>

int a() {
    int num = rand() % 100;
    char c = 'a';
    printf("Random Number: %d\n", num);
    printf("Character: %c\n", c);
    return num;
}

int main() {
    srand(time(NULL));
    a();
    return 0;
}
