
#include <stdio.h>

int a() {
    int x = 100; 
    for (int n = 100; n < 101; ++n) {
        printf(" %d ", x++);
    }
    if (x > 101) 
        return 10; 
    else 
        return 100;
}

int main() {
    int result = a();
    printf("\nResult: %d\n", result);
    return 0;
}
