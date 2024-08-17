
#include <stdio.h>

int a() {
    return 1; 
}

int main () { 
    printf("   ");  
    printf ("%i %i ", a(), a()); 
    printf("    ");  
    printf("%i ", a());  
    printf("         ");  
    printf("    ");     
    printf("%i %i   ", a() + a(), a());  
    printf("%i    ", a());       
    printf(" %i    ", a() + a() + a());   
    printf("%i       ", a() + a());          
    printf("  "); 
    printf(" %i     ", a() + a() + a()); 
    printf("%i       ", a());            
    printf(" "); 
    printf("      %i   ", a());     
    return 0;
}
