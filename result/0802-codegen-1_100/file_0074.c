
#include <stdio.h>

int a() {
    return 0;
}

void asm_function() {
    asm volatile (
        "push %%d8\n"
        "pop %%d8\n"
    );
}

int main() {
    a();
    asm_function();
    return 0;
}
