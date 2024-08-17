
#include <stdio.h>

int a() {
    int a = 0;
    for (int i = 0; i < 25; i++) {
        a = a + a * 10 * a - a;
    }
    return a;     
}

int b() {
    return 0;
}

int c(int input) {
    return input; 
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c(result_a);

    printf("%d\n", result_a);
    printf("%d\n", result_b);
    printf("%d\n", result_c);
    
    return 0; 
}
