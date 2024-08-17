
#include <stdio.h>

int a() {
    return 42; 
}

char b() {
    return 42; 
}

float d() {
    return 3.141;  
}

int c() {
    return 5;  
}

int f() { 
    return 42;   
}

int main(int argc, char *argv[]) {    
    int i;     
    for (i = 0; i < 10; i++) {  
        if (i > 8) {        
            printf("    ");   
        } else {   
            printf("\t%d\n", i);     
        }        
    }
    printf("a: %d\n", a());
    printf("b: %c\n", b());
    printf("d: %.3f\n", d());
    printf("c: %d\n", c());
    printf("f: %d\n", f());
    return 0;
}
