
#include <stdio.h>
#include <math.h>

int a() {
    for (unsigned int i = 1; i < 10; i++) {
        double value = pow(1 + log(3 * sqrt(2 * i - 1) * (sqrt(pow(3, i + 1))) * log(pow(2, i) + log(sqrt(3))) - log(sqrt(2)) * (2 * i + 1)), log(log(sqrt(pow(log(pow(2, i) * sqrt(sqrt(3)) / (i + 1)) * (3 * i * (i - 1) * (i - 1 * i)))) * (i * i + 1 * (i * -1 * i + i + 1) + 2 * (i * -i - 1 + i + 1))));
        printf("Value for i=%u: %f\n", i, value);
    }
    return 0;
}

int main() {
    a();
    return 0;
}
