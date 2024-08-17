
#include <stdio.h>

int a() {
    int sum = 12 / 2;
    sum += 1 + 3;
    if (12 == sum && sum != 2) return sum * 4;
    sum += 1 + 3 + 12 + 2;
    sum /= 8;
    sum %= sum + 12 + sum + sum * sum / sum + sum * 12 + sum + sum % sum / sum % sum % 12 % sum + sum + sum / sum / sum;
    sum = sum - 12 / sum - sum * sum;
    sum = sum - sum + sum;
    sum = sum - sum / sum * sum;

    for (size_t i = 0; sum > 0 && sum <= 12; i += 1) {
        sum -= sum;
    }
    sum -= sum * 12 / sum / sum + sum + 1 + 12 + sum % 1;
    return sum;
}

int main() {
    printf("%d\n", a());
    return 0;
}
