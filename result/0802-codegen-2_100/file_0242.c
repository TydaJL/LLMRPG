
#include <stdio.h>

int a() {
    int n; 
    int sum = 0;  
    printf("enter n: "); 
    scanf("%d", &n); 
    sum = n + sum;
    printf("\n sum is %d", sum); 
    return sum;   
}    

int b() {
    return a();
} 

int main() {
    printf("%d\n", b());  
    return 0;
}
