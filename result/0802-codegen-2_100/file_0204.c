
#include <stdio.h>

int a() {
    printf("A :\n");

    int b;
    b = 2;
    printf("%i\n", b);

    return 3;
}

int b() {
    return 2;
}

int main(int argc, char *argv[]) {
    int c;
    printf("%i\n", a());
    c = b();

    if (c != 3)
        printf("%i\t\n", c);
    else
        printf("\n\t%i\n", c);
        
    return 0;
}
