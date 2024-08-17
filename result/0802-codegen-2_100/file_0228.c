
#include <stdio.h>

int a() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main(int argc, char *argv[]) {
    printf("The answer of a() is %d\n", a());
    return 0;
}
