
#include <stdio.h>

int a() {
    return 42; 
}

int main(int argc, char *argv[]) {
    printf("hello world!\n");
    printf("%d\n", a());
    return 0; 
}
