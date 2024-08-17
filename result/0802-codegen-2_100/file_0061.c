
#include <stdio.h>

int a() {
    int x = 2;
    int A = 0; 
    if (0) {
        printf("A = %d\n", A = x);
    }
    return A;
}

int b() {
    int B = 7;
    printf("B = %d\n", B);
    return B;
}

int main() {
    int A_val = a();
    int B_val = b();
    printf("A = %d\n", A_val);
    printf("B = %d\n", B_val);
    return 0;
}
