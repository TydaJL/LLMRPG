
#include <stdio.h>

int a() {
    return 1;
}

int main() {
    int result;
    result = a();
    if (result) {
        printf("Function a returned true.\n");
    }
    return 0;
}
