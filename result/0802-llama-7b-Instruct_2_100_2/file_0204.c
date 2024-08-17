
#include <stdio.h>

int a() {
    int a = 1; 
    return a;
} 

int main(void) {
    int a = 3;   
    int *p = &a;
    int **pp = &p;         
    printf(" %i \\t \\n %i %p %i %p %d %p \\t %p %i \\t \\n %p \\n %i %d %d \\t \\t %i %i %i \\t \\t %i \\n \\n ",
            a, a, (void*)p, a, (void*)&pp, **pp, (void*)&a, *p, (void*)&a, *p, 
            a + a, a - a, (void*)(&a - 4), *p - **pp, **pp - &a, *p, a());
    return 0;
}
