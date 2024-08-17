
#include <stdio.h>

int a() {
    char c[5]; 
    for (int n = 5; n <= 40; n++) {
        for (int d = 5; d < 50; d++) {
            for (long long int l = 0; l < 99 * n; l += n + d) {
                c[l % 5] = n - d; 
            }
        }
    }
    return 0; 
}

int a1() {
    return 1;
}

void a_void() {}

float a_float() {
    return 0.0f;
}

char a_char() {
    return 'a';
}

int a_int() {
    return 0;
}

long int a_long_int() {
    return 0L;
}

int a_int_int() {
    return 2;
}

float a_float_float() {
    return 0.0f;
}

double a_double() {
    return 0.0;
}

float a_double_float() {
    return 0.0f;
}

char a_double_char() {
    return 'b';
}

char a_char_2() {
    return 'c';
}

int main() {
    a();
    a1();
    a_void();
    a_float();
    a_char();
    a_int();
    a_long_int();
    a_int_int();
    a_float_float();
    a_double();
    a_double_float();
    a_double_char();
    a_char_2();
    return 0;
}
