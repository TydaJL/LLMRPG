
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int a() {
    int x = 0;
    x = x + x;
    x++;
    x--;
    x = (x * x) / ((x + x * x) + (x % x)) - (x * x) / x - x; 
    x *= (x - x) + (x + x);
    x += x;
    x--;

    return 0;
}

int main() {
    a();
    return 0;
}
