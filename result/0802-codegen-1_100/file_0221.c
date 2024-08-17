
#include <stdio.h>

int a() {
    return 7;
}

char ch[] = " abc df ";    
char *ptr[8];

void print_ch() {
    printf("%s", ch);
}

char get_char() {
    return getchar();
}

float ft[2][3];

int main() {
    a();
    print_ch();
    char c = get_char();
    return 0;
}
