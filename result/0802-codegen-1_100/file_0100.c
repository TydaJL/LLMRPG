
#include <stdio.h>

void a() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
    }
    
    int j = 0;
    if (j == 0) {
        j = j + 1;
    }
    
    while (j < 10) {
        j++;
    }
    
    switch (j) {
        case 10:
            j = 1;
            break;
        default:
            j = 0;
            break;
    }
}

int main() {
    a();
    return 0;
}
