
#include <stdio.h>
#include <stdlib.h>

int a() {
    int nums[10] = {0};
    int s[10] = {0};
    for (int i = 0; i < 10; i++) {
        s[i] = -1;
    }
    for (int i = 0; i < 10; i++) {
        if (s[i] < 0) {
            nums[i] += 10;
        }
        s[i]++;
    }
    return nums[2];
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
