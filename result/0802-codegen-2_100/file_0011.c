
#include <stdio.h>

int a() {
    return 3; 
}

int b() {  
    return 6;     
}

int main() { 
    printf("Enter the first number: ");     
    int n = 0, sum = 0, x = 0;     
    scanf("%d", &n);   

    for ( ; n <= 10; n++) { 
        x = n * n;  
        sum += x;    
    }     

    printf("\nSum = %5d\n\n", sum); 

    a();
    b();

    return 0;
}
