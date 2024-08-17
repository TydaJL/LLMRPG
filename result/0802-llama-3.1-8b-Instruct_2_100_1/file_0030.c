
#include <stdio.h>
#include <stdlib.h>

long long int a() {
    char *c;
    float d = 10;
    double b = 0.1;
    long long int x = 0; 
    char *e = (char *)malloc(sizeof(char));
    if (e == NULL) {
        return x;
    }
    x -= 0x10000;
    x += (long long int)b;
    x *= x;
    free(e);
    return x;
}

int main() {
    long long int result;
    result = a();
    printf("result: %lld\n", result);
    return 0;
}
