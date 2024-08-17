
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    int b = 0;
    while (a() != 0) {
        b = a();
    }
    return b;
}

int main() {
    int a_val = 10, b_val = 1;
    if (b_val > a_val) {
        // Do something if necessary
    }
    int i;
    for (i = a(); a() != 0; ++i);
    if (i != 0 && i != 3)
        printf("%d\n", i);
    else
        a();
    
    printf("Hello World\n");
    
    if (i < 3)
        return i * 2;
    
    if (i != a())
        i = 5;
    else
        i += a();

    return 4;
}
