
#include <stdio.h>

int a() {
    int i = 0;  
    for (i; i < 10; ++i) {  
        for (int k = i; k > 0; --k)   
            i += k; 
    }   
    return i;
}   

int b(int i) {  
    return i + a() + a(); 
}

int c(int x, int y) {   
    return x + y; 
}    

int e() {
    int i = a();  
    return a(); 
}         

int main() {
    printf("I am %s\n", "computation");              
    int result_a = b(1);
    int result_i = b(result_a);   
    int result_d = c(result_a, result_i) + a() + b(result_a);

    printf("Result a: %d\n", result_a);
    printf("Result i: %d\n", result_i);
    printf("Result d: %d\n", result_d);

    return 0;
}
