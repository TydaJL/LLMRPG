
#include <stdio.h>

int a() {
    printf("This is my function.\n");
    return 42;
}

int b() {
    int i = 1;
    while (i < 10) {
        i++;
    }
    return 0;
}

int main(int argc, char* argv[]) {
    int d = 0;
    printf("argc = %d\n", argc);
    printf("Hello World\n");
    
    a();
    b();
    
    return 0;
}
