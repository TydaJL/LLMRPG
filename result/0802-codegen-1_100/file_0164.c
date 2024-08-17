
#include <stdio.h>

int a() {
    return 0;
}

void func1(int param) {
    printf("Parameter: %d\n", param);
    int s[10] = {0};
    for (int i = 0; i < 10; i++) {
        s[i] = i;
        printf("s[%d] = %d\n", i, s[i]);
    }
    if (s[0] < 10) {
        s[0] += 10;
    }
    while (s[2] == 5) {
        break;
    }
}

int main() {
    a();
    func1(5);
    return 0;
}
