
#include <stdio.h>

void a() {
    int array[1] = {1};
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            if (array[j] > 2 * array[i]) {
                array[j] += j / (array[i] == 0 ? 1 : array[i]);
            }
        }
    }
}

int main() {
    a();
    return 0;
}
