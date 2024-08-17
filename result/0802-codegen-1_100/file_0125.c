
#include <stdio.h>

void a() {
    int c[6];
    c[5] = 1;
    printf("Function a called\n");
}

void b() {
    int c_out[1];
    printf("Function b called\n");
}

void execute() {
    a();
    b();
}

int main() {
    a();
    b();
    execute();
    return 0;
}
