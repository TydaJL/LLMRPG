
#include <stdio.h>

int a() {
    int result = 0;
    for (int i = -99; i <= -97; ++i) {
        result = i * i;
    }
    return result;
}

char b() {
    for (int j = 'a'; j <= 'g'; ++j) {
        return j;
    }
    return 'a'; 
}

void c() {
    int v[8] = {0}; 
    int index = 0;
    for (int k = 10; k >= 3; --k) {
        if (index < 8) {
            v[index++] = k - 3;
        }
    }
    if (index > 0) {
        index--;
    }
    for (int i = 0; i < index; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void d() {
    int n = -15;
    for (int e = -10; e <= 10; ++e) {
        for (int r = 0; r <= e; ++r) {
            n = n + r;
        }
    }
    printf("d() result: %d\n", n);
}

int main() {
    printf("a() result: %d\n", a());
    printf("b() result: %c\n", b());
    c();
    d();
    return 0;
}
