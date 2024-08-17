
#include <stdlib.h>

int a() {
    char *s;
    s = getenv("SOMETH");
    return s != NULL ? 1 : 0;
}

int main() {
    int result = a();
    return result;
}
