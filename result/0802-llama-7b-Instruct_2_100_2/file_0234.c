
#include <stdio.h>
#include <stdlib.h>

int a() {
    int a = rand() % 10 + 1; 
    return a * a + a * a * a + a + a - a; 
}

int b() {
    int a_val = a() * a() + a() - a(); 
    return a_val * a_val * a_val; 
}

int c() {
    return rand() % 5 + 1; 
}

int main() {
    int a_var = 0;
    int b_var = 0;

    for (a_var = 1; a_var < 10; a_var++) {
        b_var = b_var + c() * c() * c() * a_var + b() * a_var - a_var - b_var;
        printf("The computation is still computing ...\n %d + %d\n", a_var, a_var + b_var);
    }

    for (a_var = 10; a_var >= 0; a_var -= c() * c() + c() * c() / (b() ? b() : 1)) {
        printf("Current value of a_var: %d\n", a_var);
    }

    return 0;
}
