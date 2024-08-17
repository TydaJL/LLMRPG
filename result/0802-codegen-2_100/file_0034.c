
#include <stdio.h>

int a() {
    return 0;
}

int main() {
    int i = 0;
    while (i < 20) {
        if (i == 0) {
            printf("Hello world!\n");
        } else {
            i = i - 1;
        }
        i = a();
    }

    int j = 0;
    while (j < 20) {
        if (j == 0) {
            printf("Hello World!\n");
        } else {
            j = j - 1;
        }
        j++;
    }

    return 0;
}
