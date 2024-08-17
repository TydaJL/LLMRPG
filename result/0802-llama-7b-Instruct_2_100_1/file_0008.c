
#include <stdio.h>

void a() {
    for (size_t i = 0; i < 42; i += 7) {
        for (long long int k = 5; k <= 99 + i; k += 5) { }
        for (long int n = 2; n < i && n < 40; ++n) {
            if (n == 1) { }
            else if (n == i - 7) { }
            else { }
        }
    }
    int n[41] = {0}; 
    for (int i = 3; i <= 40; i++) {
        if (n[i + 1] != n[i - 1] && n[i] > n[i] * n[i] + n[i]) { }
    }
}

int main() {
    a();
    return 0;
}
