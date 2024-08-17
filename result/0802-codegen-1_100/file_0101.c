
#include <stdio.h>

void a() {
    char buf[1000000]; 
    FILE *file_ptr; 
    long c = 100 + 10; 
    float temp = 1 + 1000 * 10 * 100; 
    double r = (1 + 100 * 5 - 50) / 100.0; 
    double p = 1 + 2;

    printf("c: %ld\n", c);
    printf("temp: %f\n", temp);
    printf("r: %lf\n", r);
    printf("p: %lf\n", p);

    file_ptr = fopen("output.txt", "w"); 
    if (file_ptr != NULL) { 
        fprintf(file_ptr, "Buffer size: %lu\n", sizeof(buf)); 
        fclose(file_ptr); 
    }
}

int main() {
    a(); 
    return 0; 
}
