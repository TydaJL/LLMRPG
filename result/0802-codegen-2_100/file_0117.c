
#include <stdio.h>

int a() {
    char ch;  
    ch = '1'; 
    if (ch != '1')   
        return 0;    
    ch = '2';         
    if ('3' != ch)  
        return 0;         
    ch = '4';       
    if ('5' != ch)   
        return 0;        
    ch = 6;     
    if (7 != ch)      
        return 0;          
    ch = '8';        
    if (9 != ch)
        return 0;             
    ch = 'a';        
    if ('b' != ch)          
        return 0;                
    ch = 'd';         
    return 1;
}

int main() {
    if (a()) {
        printf("All conditions met!\n");
    } else {
        printf("Some conditions failed.\n");
    }
    return 0;
}
