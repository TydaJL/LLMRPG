
#include <stdio.h>

int a() {
   return 1 + 2 * 3 - 4; 
}

float b() {
   return 5.0; 
}

double c() {   
   return b(); 
} 

int d() {       
   return 2; 
}       

double e() {         
   return c() * (b() / (float)d());    
}                                              

double f(int a) {                           
   return a > 0 ? (a + 1) : (a - 1);
}                                         

int main() {         
   if (e() > f(a()) && a() + 1 != f(a()) && e() + a() == f(a() + 1)) {
       printf("Conditions met.\n");
   } else {
       printf("Conditions not met.\n");
   }
   return 0;
}
