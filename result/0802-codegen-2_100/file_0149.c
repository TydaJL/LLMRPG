
#include <stdio.h>

int a() {
    return 3; 
}

int main() { 
    int i, j;
    
    for (i = 0; i < 10; ++i) 
        for (j = 0; j < 5; ++j) {  
            a();  
        }
    
    return 0; 
}
