
#include <stdio.h>

void a() {
    FILE *fin = fopen("input.txt", "r");
    if (fin) {
        // Add your code to read from the file or process the data
        fclose(fin);
    } else {
        printf("Error opening file.\n");
    }
}

int main() {
    a();
    return 0;
}
