
#include <stdio.h>
#include <stdlib.h>

int a() {
    char buf[80];  
    char str[80];  
    int n = 0;   
    float f;   

    for (n = 0; n < 10; n++) {
        snprintf(str, sizeof(str), "Iteration %d", n);
        printf("%s\n", str);
    } 

    f = (float)1.2345;  
    printf("%d\n", n); 
    printf("%f\n", f);  
    
    return n; 
}

int main() {  
    printf("Returned from a(): %d\n", a());     
    system("pause");   
  
    return 0; 
}
