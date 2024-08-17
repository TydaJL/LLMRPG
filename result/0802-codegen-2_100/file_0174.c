
#include <stdio.h>

int a() {
    return 1; 
}

int main() {
    int a_value = 1;

    while (1) {
        a_value++;
        if (a_value > 1000000) {
            break;
        }
    }

    int result = a();
    printf("Function a() returned: %d\n", result);
    printf("Final value of a_value: %d\n", a_value);

    return 0;      
}
