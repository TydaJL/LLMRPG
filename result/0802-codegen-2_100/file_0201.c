
#include <stdio.h>

int a() {
   int a = 0, b = 1, c = 0, d = 5, e = 6;
   a += b * c + d * e + 5;

   int aa = 3, bb = -1, cc = -2, dd = 4, ee = -3;
   aa * bb + cc * dd + ee + 5 + 6;

   return 0;  
}

int main() {  
    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
    a += b * c;
    a();  
    return 0;  
}
