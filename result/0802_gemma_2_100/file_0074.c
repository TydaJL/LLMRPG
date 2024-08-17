
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int c() {
    return 3;
}

int d() {
    return 4;
}

int e() {
    return 5;
}

int main() {
    int result1 = a();
    int result2 = b();
    int result3 = c();
    int result4 = d();
    int result5 = e();
    
    printf("%d %d %d %d %d\n", result1, result2, result3, result4, result5);
    
    return 0;
}
