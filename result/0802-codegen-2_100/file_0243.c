
#include <stdio.h>
#include <string.h>
#include <math.h>

int a() { 
    int i = 1; 
    for (int k = 1; i < 5; i++) { 
        i++; 
    }
    return 0; 
}

#ifdef NDEBUG
int a(int i, int j) { 
    if (i > 0 && i < 10) return 10; 
    return 30; 
}

int b() { 
    return 20; 
}
#endif 

#ifndef NDEBUG
int c(int i, int j, int k) { 
    if (i > 0) return i; 
    return 0; 
}
#endif 

int main() {
    a();
    #ifdef NDEBUG
    a(5, 3);
    b();
    #endif 
    return 0;
}
