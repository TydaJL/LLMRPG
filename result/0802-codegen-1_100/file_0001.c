
#include <stdio.h>

void a() {
    printf("Enter two integers: ");
    
    int x, y;
    scanf("%d %d", &x, &y);
    
    if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is greater than or equal to y\n");
    }
}

int main() {
    a();
    return 0;
}
