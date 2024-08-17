
#include <stdio.h>

int a() {
    return 2;
}

char* h() {
    return "Hello";
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    
    char* message = h();
    printf("Message: %s\n", message);
    
    return 0;
}
