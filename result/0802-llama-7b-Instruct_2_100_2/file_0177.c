
#include <stdio.h>

int a() {
    int i = 0;
    char c = '\0', s[] = "", t[10] = {'\0'};
    float f = ((float)0.1 + (((float)-10 * (((float)i) - i) / 3)) + (float)2) * (-1);
    i = f;
    i = (int)i;
    if (i == ((int)-i)) 
        printf("%d\n", (int)i);
    i = t[5] - s[0] - c - i;
    if (s[0] == '\0') 
        i = (-i - (i + ((int)f)));
    else 
        i += i;
    i = (int)i;
    if (i == i) 
        i = (int)i;
    return i;
}

int main() {
    a();
    return 0;
}
