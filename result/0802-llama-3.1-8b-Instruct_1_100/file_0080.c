
#include <stdio.h>

void a() {
    char arr[3] = {'a', 'b', 'c'};
    int i;

    for(i = 0; i < 3; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
