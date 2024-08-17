
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    int i; 
    for (i = 0; i < 100000; i++) { 
        if (i >= 32 && i < 127) {
            printf(" %c ", (char)i);
        }
    }  
    return 0; 
}

int main(int argc, char **argv) {
    a();
    b();
    return 0;
}
