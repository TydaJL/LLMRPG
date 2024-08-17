
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double a() {
    return (double)rand() / (double)RAND_MAX;
}

void g(double a, int b) {
    printf("\n%.2f    %d\n", a, b);
}

int main(int argc, const char** argv) {
    srand((unsigned int)time(NULL));
    double arr[argc];
    
    printf("\n\t%d\n\n", argc);
    for (int i = 0; i < argc; i++) {
        arr[i] = a();
        g(arr[i], i);
    }
    return 0;
}
