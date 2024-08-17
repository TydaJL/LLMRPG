
#include <stdio.h>

void a() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
            continue;
        } else {
            printf("%d is odd\n", i);
            break;
        }
    }

    int condition = 1;

    if (condition) {
        switch (condition) {
            case 1:
                printf("Condition is 1\n");
                break;
            default:
                printf("No match found\n");
        }
    }

    while (condition) {
        printf("While loop running\n");
        break;
    }
}

int main() {
    a();
    return 0;
}
