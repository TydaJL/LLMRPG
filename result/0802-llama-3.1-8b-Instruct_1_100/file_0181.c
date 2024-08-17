
#include <stdio.h>

int a() {
    return 0;
}

#define F (a())

int main() {
    a();
    F;
    return 0;
}
