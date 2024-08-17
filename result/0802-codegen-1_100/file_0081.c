
#include <stdio.h>

int a(); // Forward declaration

int b() {
    return 0; // Base case to prevent infinite recursion
}

int a() {
    return b();
}

int main() {
    a();
    return 0;
}
