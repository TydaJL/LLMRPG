
#include <stdio.h>

int a() {
    int a1[1];
    printf("size of the array is ");
    return sizeof(a1) / sizeof(a1[0]);
}

int main() {
    printf("%d\n", a());
    printf("%lu\n", sizeof(a)); 
    return 0;
}
