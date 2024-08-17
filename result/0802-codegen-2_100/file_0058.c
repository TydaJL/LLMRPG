
#include <stdio.h>

int a() {
    return 4;
}

int main(void) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    
    int value = a();
    printf("Value from function a: %d\n", value);

    return 0;
}
