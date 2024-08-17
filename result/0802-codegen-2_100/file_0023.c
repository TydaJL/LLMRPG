
#include <stdio.h>

int a() {
    char c1 = 1;
    char c2;
    char *c3;
    char *c4;

    int i = 1;

    float f = 2.0;
    float f1 = 0;

    int vi[5] = {3, 0, 0, 0, 0};

    double d[101] = {0};

    printf("Hello World!\n");

    for (i = 0; i < 101; ++i) 
        printf("%d    ", (int)d[i]);

    return 0;  
}

int main() {
    a();
    return 0;
}
