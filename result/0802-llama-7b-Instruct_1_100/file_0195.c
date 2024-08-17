
#include <stdio.h>

int a() {
    char arr[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
    for (int i = 0; i < 10; i++) {
        if (arr[i] == '\0') {
            return i;
        }
    }
    return -1;
}

int main() {
    int result = a();
    printf("The length of the string is: %d\n", result);
    return 0;
}
