
#include <stdio.h>
#include <stdlib.h>

int inputValue() {
    int input;
    scanf("%d", &input);
    return input;
}

void checkValue(int a) {
    if (a % 100 == 0 && a == 200) {
        printf("Output: Yes\n");
    } else {
        printf("Output: No\n");
    }
}

int main() {
    int value = inputValue();
    checkValue(value);
    return 0;
}
