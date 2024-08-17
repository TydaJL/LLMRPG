
#include <stdio.h>

int a() {
    int ln[100];
    for (int i = 0; i < 10; i++) {
        ln[i] = i; 
        printf("%d\n", ln[i]); 
    }
    return 2;
}

void f() {
    printf("Function f is called.\n");
}

int main() {
    a();
    f();
    return 0;
}
