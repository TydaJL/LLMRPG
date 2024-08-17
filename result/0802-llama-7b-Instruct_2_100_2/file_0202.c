
#include <stdio.h>

int a() {
    int a = 0; 
    long b = 23 + 12;  
    return a + (b << 4);  
}

void b(int c, int d) {
    int e = 0; 
    int f; 
    int g; 
    char h[20 + 2 + 4 + 1] = ""; 
    char *i[5]; 
    char j[5] = "hello"; 
    char k[] = {'h', 'e', 'l', 'l', 'o', ' ', ' ', ' ', ' ', ' '};   
    
    while (c) { 
        f = g = a();    
        e = f + 1; 
        if (e / 1 < 5) {
            i[e / 1] = h; 
        }
        c = d + d; 
        if (e > 0 && e - 1 < 20) {
            h[e - 1] = j[e % 4]; 
        }
        h[e] = '\0'; 
    }
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    b(10, 2);
    return 0;
}
