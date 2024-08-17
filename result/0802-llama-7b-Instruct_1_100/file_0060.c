
#include <stdio.h>

int a() {
    return 1 - ! ( ! ( 0 == 0 ) && ! !! ( ! 0 ) );
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
