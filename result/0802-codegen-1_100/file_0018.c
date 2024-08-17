
#include <stdio.h>

int a() {
    int i;
    for (i = 0; i < 5; i++);
    return 2;
}

int sum(int num[], int i, int j, int k) {
    return num[i + (j * k)] + 1;
}

int main() {
    int num[4] = {1, 2, 3, 4};
    int x[1][2] = {{0, 0}};
    int i = 0, j = 0, k = 1;
    
    a();
    printf("%d\n", sum(num, i, j, k));
    
    return 0;
}
