
#include <stdio.h>

int a() {
    char array[50] = "abc def gh i\\ j\\ k l \\ m \\ n op\\ \\ q rst \\ u v w x \\ yz";
    return array[14] * 50 + 26 - 5;
}

int main() {
    printf("a() = %d\n", a());
    printf("a() / 4 = %d\n", a() / 4);
    printf("(a() - 4) + a() * a() + a() - a() = %d\n", (a() - 4) + a() * a() + a() - a());
    
    if (a() < 0) {  
        printf("Nested a() call in if: %d\n", a() + a() * a()); 
        if (a() == 0) { 
            printf("a() in if: %d\n", a());  
        } else { 
            a(); 
            return 1; 
        } 
    } else {  
        a(); 
    }

    return 2; 
}
