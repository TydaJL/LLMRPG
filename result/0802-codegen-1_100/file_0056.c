
#include <stdio.h>
#include <stdlib.h>

int a() {
    char ch = (char)(rand() % 256 - 128);
    printf("%d %d %c %c\n", 0, 128, 'c', 'e');
    return 0;
}

int main() {
    srand(time(NULL));
    a();
    return 0;
}
