
#include <stdio.h>

void a() {
    int j = 0, i = 10;
    
    while (i > 0) {
        if (j <= 100) {
            printf("%2d ", j);
            j += 10;
        }
        i--;
    }
    
    printf("Display the value of n times\n");
}

int main() {
    a();
    return 0;
}
