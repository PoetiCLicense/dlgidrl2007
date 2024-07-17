#include <stdio.h>

int middle(int a, int b, int c) {
    if (a>=b) {
        if (b>=c) return b;
        else if (a<=c) return a;
        else return c;
    }
    else if (a>c) return a;
    else if (b>=c) return c;
    else return b;
}

int main() {
    printf("%d", middle(3,8,5));

    return 0;
}