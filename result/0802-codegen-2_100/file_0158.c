
#include <stdio.h>

int a() {
    return 1; 
}

void b() {  
    int c = 0; 
    c = c + c;   
}

int main() {
    a();
    b();
    return 0;
}
