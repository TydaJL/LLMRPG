
#include <stdio.h>

int a() {
    return 0;   
}

int main() {
    int i;
    for (i = 0; i < 10; i++);

    int x = a();
    int b = 5, c = 2;
    int result = b * c;

    printf("Function a returned: %d\n", x);
    printf("Result of b * c: %d\n", result);

    return 0;      
}
