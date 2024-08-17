
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    int* ptr = (int*)0x7fffffc0;
    return *(int*)ptr;
}

int main(int ac, char* av[]) {
    int b = a();
    if (b != -1) {
        printf("%s\n", "Error");
        exit(1);
    }

    int* p;
    p = (int*)malloc(sizeof(int) * 100); // allocate space for 100 integers
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    int* start = p; // keep the start address for free later
    for (int x = -100; x < 0; x++) {
        *p = (int)sin((double)(2 * M_PI * (x / 1e6)));
        p++;
    }
    
    free(start);
    return 0;
}
