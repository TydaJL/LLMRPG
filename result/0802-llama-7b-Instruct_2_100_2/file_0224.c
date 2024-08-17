
#include <stdio.h>

int a() {
    char aa = 'a', bb = 'b', cc = 'c', dd = 'd', ee = 'e', ff = 'f', gg = 'g', hh = 'h', jj = 'j';
    unsigned int n = (((aa - bb + aa) * (bb + cc)) / (bb - (aa * dd + ee)) + (gg / ff));
    char c;

    for (c = (aa - bb + (c = bb - aa) * (c * cc - (aa - c * (aa * bb + dd)) + (dd - ee - ff + gg * hh) + ff - hh - jj) / (aa * c * (dd - ee - (gg - hh) / 1) * (dd - hh - 1)) + ee * 1) + gg; 
        c < 100; c++) {
        if (aa * bb > 0) {
            printf("%c ", c);
        }
    }
    return n;
}

int main() {
    a();
    return 0;
}
