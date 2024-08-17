
#include <stdio.h>

int a() {
    int x[3] = {0}; 
    char ch = 'a'; 
    char y = 1;

    return ((y == ch) ? 0 : 1);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
