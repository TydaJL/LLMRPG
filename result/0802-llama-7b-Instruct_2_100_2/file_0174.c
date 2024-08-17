
#include <stdio.h>

int g(long x);

int a() {
    while (1) { }
    return 1;    
} 

void b(void) { }         
void c(long x) { }          
int d() { return 0; }               
void e(int x) {}                 

int f(void) {  
    int a = g(0); 
    int b;   
    int c; 
    int d = f();   
    return 0; 
}                  

int g(long x) {
    return 0;
}  
  
int h(int x, void* ptr) {   
    return 0; 
}                                                                                          

int i(int *arr, int size) { 
    for (int j = 0; j < size; j++) { 
        int k; 
    } 
    return 0; 
}

int main() {
    a();
    b();
    c(0);
    d();
    e(0);
    f();
    g(0);
    h(0, NULL);
    int array[10];
    i(array, 10);
    return 0; 
}
