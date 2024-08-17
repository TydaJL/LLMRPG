
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int main(int argc, char** argv) {
    int a = 1;  
    if (a) {
        while (a > 1 && a < 6) {
            a = b();
        }
    } else {
        a = 0; 
    }
    return a + a;    
}
