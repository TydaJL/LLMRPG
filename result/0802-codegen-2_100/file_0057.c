
#include <stdio.h>

int a();
int b();

int main() {    
    int score;

    printf("Enter your name: ");
    char name[50];
    scanf("%49s", name);

    score = a();
    printf("\nYour score is: %d\n", score);
    
    return 0;
}

int a() {
    int n;
    printf("Enter a number: ");  
    scanf("%d", &n); 
    return n + b(); 
}

int b() {  
    int c;  
    printf("Enter b number: ");  
    scanf("%d", &c);    
    return c;   
}
