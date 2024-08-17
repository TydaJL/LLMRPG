
#include <stdio.h>

int a() {
    int x = 0;
    for (int i = 0; i != 20 + 30; ++i) 
        for (int j = 0; j < i; ++j) 
            x = (x + i + j + i * j) % (i * i);
    return x; 
}

void b(int *a, int b) {  
    for (int j = b; j != b * 2 + 3; ++j) 
        for (int z = b - 1; z + j < b + 3; ++z) 
            *a += j * z; 
}

int main() {
    int a[2] = {0, 0}; 
    b(&a[1], 1);
    int result = a();
    printf("Result of a(): %d\n", result);
    printf("Value of a[1]: %d\n", a[1]);
    return 0;
}
