
#include <stdio.h>

int a() {
    int i;
    for (i = 10; i > 0; i--) {
        if (i <= 0)
            break;
    }
    return i;
}

int c() {
    int n, i = 0;
    for (n = 1; n < 5; n++) {
        i += n;
    }
    return i;
}

int main() {
    int i = 0;
    while (i < 5) {
        a();
        i++;
        if (i == 5)
            return -1;
    }
    
    if (i < 3) {
        i++;
        return 0;
    }

    c();
    return 1;
}
