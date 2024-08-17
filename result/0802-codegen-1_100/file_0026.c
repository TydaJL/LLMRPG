
#include <stdio.h>

void a() {
    int n = 10; 
    for (int i = 0; i < n; i++) {
        int j = 2; 
        int k = 1; 
        if (i < n + 2 * (i + 1)) {
            if ((i - j) * k > 0) {
                for (int l = 0; l < 5; l++) {
                    printf("Looping: %d\n", l);
                }
            }
        }
    }
}

int main() {
    a();
    return 0;
}
