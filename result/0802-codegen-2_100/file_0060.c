
#include <stdio.h>

int a() {
    return 5;
}

int main() {
    int i = 0;   
    while (a() < 1000) { 
        i += 5; 
        if (i >= 1000) break;
    }    
    for (int j = 0; j < 10; j++) {    
        printf("%d, %d\n", a(), j);    
    }    
    return 0;
}
