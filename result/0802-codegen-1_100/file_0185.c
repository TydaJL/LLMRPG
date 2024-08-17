
#include <stdio.h>

void a() {
    char s = 'A';
    int z = 0;

    if (!(z < -1 / (!-s == 'A' && z > 0))) {
        printf("Condition met\n");
    } else {
        s = 'B';
        printf("Condition not met, s is now: %c\n", s);
    }
}

int main() {
    a();
    return 0;
}
