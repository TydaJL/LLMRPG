
#include <stdio.h>

int a() {
    int i;  
    for (i = 1; i < 100; i++) { }
    return 0;
}

void printArithmeticSeries(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    while (argc < 10) {
        a();
        argc++;
    }
    int n;
    printf("Enter a number for the arithmetic series: ");
    scanf("%d", &n);
    printArithmeticSeries(n);
    return 0;
}
