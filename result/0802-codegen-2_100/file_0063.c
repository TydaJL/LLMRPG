
#include <stdio.h>

int a() {
    return 1 + 3;
}

void b(int x, int *y) {
    for (int i = 0; i < x; i++) {
        (*y) += i;
    }
}

int main() {
    int x = 0;     
    char c[100];     
    int y = 0;    

    scanf("%99s %d", c, &x);
    printf("%d %d\n", a(), y);
    b(x, &y);
    printf("%d\n", y);
    printf("%s\n", c);
    
    return 0;
}
