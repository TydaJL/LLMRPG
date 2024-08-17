
#include <stdio.h>

int a() {
    int i, j;
    int x = 0, c = 1;
    int r = 1;
    int b = r + r;
    int n = c;
    int t = c + c;
    int d = n;
    int s = r + t;

    while (s < 25) {
        d = b;
        b = c + t;
        i = t;
        t = b + b;
        j = b;
        n = i + j;
        x = n;
        r = x + x;
        n = x + x + r;
        d = b;
        b = j + b;
        c = r + s;
        j = b;
        s = n + n;
        t = b + t;
        x = n + n;
        c = x;
        j = s + t;
        x = j;
        r = t + t;
        j = b + b;
        r = b + t;
        s = r + s;
        d = j + t;
        d = s + t;
    }
    return 0;
}

int main() {
    a();
    return 0;
}
