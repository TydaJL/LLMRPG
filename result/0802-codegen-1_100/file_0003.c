
#include <stdio.h>

int a() {
    return 1;
}

int main() {
    printf("%d\n", a());
    return 0;
}

int function1() {
    return 1;
}

int function2() {
    return 1 + 1;
}

int function3(int x) {
    if (x == 1) {
        return 1;
    }
    return 0;
}

int function4() {
    for (int i = 0; i < 2; i++) {
        // do something
    }
    return 0;
}
