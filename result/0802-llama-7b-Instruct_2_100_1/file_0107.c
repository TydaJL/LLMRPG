
#include <stdio.h>

int a() {
    int i = 4;
    for (float a = 3. + i * 3. * 2.; i == 4; ++i)
        for (a = a + a * a; i == 4; --i);
    for (i = 4; (i <= 4); ++i) 
        for (a += a; i < 4 * i + i + i * i + i * i * i * i; ++a);
    return i * i * i - i - i;
}

int main() {
    int c = -a();
    printf("Result: %d\n", c);
    return 0;
}
