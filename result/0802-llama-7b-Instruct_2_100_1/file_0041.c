
#include <stdio.h>

int a() {
    int x = 0, y = 0, z; 
    do { x++; } while (1 != 0);
    x = x + 2; 
    if ((x < 10)) { 
        y = y + 1; 
    } 
    return y + 3; 
}

int main() {
    int result_a = a();
    if (result_a == 4) { 
        puts(" \\0 \\0 \\0 \\0 "); 
    }
    return 0; 
}
