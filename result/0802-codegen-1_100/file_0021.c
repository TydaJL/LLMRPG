
#include <stdio.h>

int a() {
    printf("A  ");
    int i = 2;
    int k[i]; 
    for (int j = 0; j < i; j++) {
        k[j] = j + 1;
    }
    for (int j = 0; j < i; j++) {
        printf("%d ", k[j]);
    }
    return 5;
}

int main() {
    a();
    return 0;
}
