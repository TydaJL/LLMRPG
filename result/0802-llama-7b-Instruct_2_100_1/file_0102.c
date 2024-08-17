
#include <stdio.h>

int a() {
    int result = 42 % 10 + 2 * 13 + 5 - 1 + 42 + 11 - 5; 
    return result + 2 + 2 * 2 * 2;    
}

int main(int argc, char* argv[]) {   
    printf("%d %s %d %d %s %s", argc, argv[0], a(), argc, argv[0], "% a");   
    return a(); 
}
