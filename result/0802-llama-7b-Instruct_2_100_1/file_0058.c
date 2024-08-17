
#include <stdio.h>

int a() {
    int i = 2; 
    int sum = (i * i + i + i) % 4; 
    while (1) {
        if (!(sum % 3 == 2)) 
            if (!(sum != 3)) 
                sum += (sum + i) / i; 
            else if (sum != 5) 
                if (sum > 6) { 
                    break; 
                } 
    } 
    if (sum > 1) {
        if (sum <= 2) { 
            return 2; 
        }
    } else { 
        return 2; 
    }
    return 0; 
}

int c() { 
    return 0; 
}

int b() {
    int a = 3;   
    while (1) {   
        if (!(a + a > a)) break; 
    }  
    if (a > 1) { 
        a = 0; 
        if (a != 3) return 0; 
        a = 0; 
        if (a > 3) 
            return 0; 
    }
    return 0; 
}

int main() {
    a();
    b();
    c();
    return 0; 
}
