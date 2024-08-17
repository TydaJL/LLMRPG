
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void a() {
    int i = 0;
    while (i <= 10) {
        int *j = &i;
        j++;
        j--;
        i++;
    }
}

char *c() {
    char *a = malloc(10 * sizeof(char));
    char *b = a + 3;
    char c[10];
    strcpy(c, "Hello");
    strncpy(a, c, 10);
    a += 2;
    return a;
}

float e() {
    int i = 0;
    float *j = (float *)(i + sizeof(float));
    j[1];
    j += (size_t)(sizeof(float));
    return j[-2];
}

char *d() {
    char *p = malloc(10 * sizeof(char));
    return p;
}

int main() {
    a();
    char *str = c();
    printf("%s\n", str);
    free(str - 2);
    float val = e();
    printf("%f\n", val);
    char *ptr = d();
    free(ptr);
    return 0;
}
