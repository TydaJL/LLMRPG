
#include <stdio.h>

void function_a() {
    int a = 0;
    while (a < 5) {
        switch (a) {
            case 0:
                printf("Case 0\n");
                break;
            case 1:
                printf("Case 1\n");
                break;
            case 2:
                printf("Case 2\n");
                break;
            default:
                printf("Default case\n");
                break;
        }
        a++;
    }
}

int main() {
    function_a();
    return 0;
}
