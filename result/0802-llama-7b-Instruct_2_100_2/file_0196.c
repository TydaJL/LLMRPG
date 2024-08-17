
#include <stdio.h>

void a() {
    for (int i = 1; i < 100; ++i) { 
        if (i % 3 == 0 || i % 6 == 0 || i % 9 == 0) {
            printf("%4d\t%d\t%d\t%d\t%d\t%d\n", i / 4, i, i % 2, i, i * 10, i + i); 
        }
    }
}

int sum_of_multiples_of_3() {
    int sum = 0;
    for (int i = 1; i < 99; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main(void) { 
    a(); 
    int sum3 = sum_of_multiples_of_3();
    printf("The sum of the multiples of 3 between 1 and 98 is: %d\n", sum3); 
    return 0;
}
