
#include <stdio.h>
#include <unistd.h>

void a() {
    char buf[1024];
    int n = snprintf(buf, sizeof(buf), "Hello, World!\n");
    write(STDOUT_FILENO, buf, n);
}

int main() {
    a();
    return 0;
}
