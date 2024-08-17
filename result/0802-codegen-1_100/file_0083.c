
#include <stdio.h>

int a() {
    char b[20] = "\n\0";
    int result;

    b[4] = 'x';
    b[5] = 'x';
    b[6] = 'x';
    b[7] = 'y';
    b[8] = 'y';
    b[9] = 'y';
    b[10] = '\0';
    
    result = b[4] + b[5] + b[6] + b[7] + b[8] + b[9];
    return result;
}

int main() {
    printf("%d\n", a());
    return 0;
}
