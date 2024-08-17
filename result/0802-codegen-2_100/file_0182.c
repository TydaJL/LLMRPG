
#include <stdio.h>

int a() {
    return 7; 
}

int c() {
    return a() + 5; 
}

int main() { 
    printf("%d\n", c());
    return 0;
}
