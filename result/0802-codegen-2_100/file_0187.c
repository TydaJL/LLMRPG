
#include <stdio.h>

void function_a() {
    char *str = "Hello, World!";
    printf("%s\n", str);
}

int function_b() {
    int value = 42;
    return value;
}

int main(int argc, char *argv[]) {
    function_a();
    int result = function_b();
    printf("Result from function_b: %d\n", result);
    return 0;
}
