
#include <stdio.h>

int a() {
    return 5; 
} 

int main() {  
    int i;
    float x[10];
    i = a();  
    i += i;  
    if (i < 10) {
        x[i] = 1.0f;  
    }
    i++;   
    if (i < 10) {
        i -= (int)x[i];      
    }
    return 0;   
}
