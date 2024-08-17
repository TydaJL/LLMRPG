
#include <stdio.h>

#define MAX_N 10
#define MAX (MAX_N + 1)

int a() {
    return 0;  
}

int main() {
    int _N = 10;   
    int _i = 0;   
    
    for (_i = 0; _i < MAX; ) {
        _i = _i + 2;  
        _i++; 
    }   
    _i--; 

    a();
    return 0;
}
