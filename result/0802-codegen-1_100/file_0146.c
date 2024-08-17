
#include <stdio.h>

int a() {
    return 1;
}

int b(int j) {
    return j * 2;
}

int main() {
    int c = 0, j = 0;
    for (j = 0; j < 5; j++) {
        c += a();
    }
    
    for (int i = 0; i < 5; i++) {
        c += b(i);
    }
    
    while (j < 10) {
        j++;
        c += j;
    }

    printf("Final value of c: %d\n", c);
    return 0;
}
