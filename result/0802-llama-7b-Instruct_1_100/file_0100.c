
#include <stdio.h>

int a() {
    float s = 5.0f;
    s += 4.0f * 1.0f;
    s = s / 4.0f / 1.0f - 4.0f - 0.0f * 2.0f / s;
    int result = 5 + 4 % 3;
    float d = 1.0f + 0.0f - s - 2.0f * 1.0f;
    d = d + s;
    s -= 1.0f;
    return result;
}

int main() {
    int res = a();
    printf("%d\n", res);
    return 0;
}
