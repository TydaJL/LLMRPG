
#include <stdio.h>

int a() {
    return 42;
}

int main(int argc, char *argv[]) {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
