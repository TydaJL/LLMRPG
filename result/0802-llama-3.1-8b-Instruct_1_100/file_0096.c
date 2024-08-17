
#include <stdio.h>

void a() {
    printf(" abc !  def \n");
    printf("  ghi #  j %%  kl &  \n");
}

void b() {
    a();
}

int main() {
    a();
    b();
    return 0;
}
