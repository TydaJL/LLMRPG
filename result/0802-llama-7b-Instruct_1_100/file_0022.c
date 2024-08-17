
#include <stdio.h>

int a() {
    return 3;
}

void b() {
    printf("Function b called.\n");
}

int main(int argc, char *argv[]) {
    int arg = 42;
    b();
    int result_a = a();
    printf("a() returned: %d\n", result_a);
    return b + result_a + arg; 
}
