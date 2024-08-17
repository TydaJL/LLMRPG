
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void a() {
    int i = 1000;
    int j = 0;
    char *str = malloc(100);
    while(i > 1) {
        j = 0;
        while(!(i * i % (i + j) != 1 && (j + i % i == j || j - i > i)) && j < sqrt((float)(j * i))) {
            j++;
        }
        if(j == sqrt((float)(j * i))) {
            break;
        }
        i -= 3;
    }
    if(j == 1)
        str = realloc(str, (i - j));
    free(str);
}

int main() {
    a();
    return 0;
}
