
#include <stdio.h>

void a() {
    printf("a ");
    for (int i = 0; i < 5; i++) 
        printf("%i \n", i); 
    printf("done.\n"); 
}

int main(void) { 
    printf("\n");  
    printf("Welcome to C!\t"); 
    a(); 
    printf("\t\n");
    return 0;    
}
