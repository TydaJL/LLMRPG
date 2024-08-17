
#include <stdio.h>

int a() {
    for (int i = 0; i < 100; ++i) {
        return i;
    }
    return 0;
}

int b(int n) {
    if ((n > 10) || (n < -10)) {
        return -1;
    } else if (n % 2 == 0) {
        return 0;
    } else if (n == 3) {
        return -1;
    }
    return 1;
}

int c(char ch) {
    int ret = 0;
    if (ch == 'c') {
        return 0;
    } else if (ch == 'd') {
        return 1;
    }
    return ret;
}

int main() {
    int result_a = a();
    int result_b = b(5);
    int result_c = c('c');
    
    printf("Result of a(): %d\n", result_a);
    printf("Result of b(5): %d\n", result_b);
    printf("Result of c('c'): %d\n", result_c);
    
    return 0;
}
