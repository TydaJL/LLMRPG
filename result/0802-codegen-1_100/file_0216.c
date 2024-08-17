
#include <stdio.h>

int a() {
    static float c = 0;
    int d = 1;
    if (c == 1) {
        if (*(int*)(&c) != 0) 
            return -2; 
    } else {
        c++;
        return 1; 
    }
    printf("%f\n", c);
    printf("%d\n", d);
    return (int)c + d;
}

int main() {
    a();
    return 0;
}
