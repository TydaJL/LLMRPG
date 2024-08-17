
#include <stdio.h>

int a() {
    return 2; 
}

int main() {  
    int i, j;  
    for (i = 1; i < 10; ++i) {   
        for (j = 0; j < a(); ++j) {
            if (i > j)   
                printf("%d %d %d\n", i, j, i - j);   
        }     
    }     
    return 0;      
}
