
#include <stdio.h>
#include <stdarg.h>

#define printf(format, ...) _printf(format, __VA_ARGS__)

void _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

int a() {
    if (1) {
        printf("error 1\n");
    } else {
        printf("no error\n");
    }
    return -3;
}

int main() {
    a();
    return 0;
}
