
#include <stdio.h>
#include <stdlib.h>

int a() {
    char ch = '1';
    int result_a = ch - '0';
    return result_a;
}

void *mem_function(const int size) {
    return malloc(size);
}

void call_oc(int x, const float s) {
    printf("Integer: %d, Float: %.2f\n", x, s);
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);

    void *memory = mem_function(10);
    if (memory != NULL) {
        printf("Memory allocated successfully.\n");
        free(memory);
    }

    call_oc(5, 3.14);

    return 0;
}
