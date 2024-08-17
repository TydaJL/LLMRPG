
#include <stdio.h>

int a() {
    printf("%ld\n\n\n", (long)0);
    return 1;
}

int main(int argc, char **environ) {
    int i;
    a();
    printf("\nThis is a great program\n");
    return 0;
}
