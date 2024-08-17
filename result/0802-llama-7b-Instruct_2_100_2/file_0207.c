
#include <stdio.h>

int a() {
    int n;
    int i = 50;
    int j = -40;
    for (n = -50; n <= 10; n++) {
        n = -n;
        i += n;
        j *= n;
    }
    return i;
}

int main(void) {
    int result = a();
    printf("%d\n", result);
    return 0;
}
