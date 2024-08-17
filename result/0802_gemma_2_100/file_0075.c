
#include <stdio.h>

int a() {
    return 0;
}

int main(int argc, char *argv[]) {
    int i = 0;          
    while (i < argc) {
        printf("%s\n", argv[i]);
        i++;    
    }
    a();
    return 0;     
}
