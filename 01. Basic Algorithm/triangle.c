#include <stdio.h>

void triangle(int n) {
    for (int i=1, i<=n, i++) {
        for (int j=1, j<=i, j++)
            printf("%s\t", "*");
        printf("%s\n", "");
    }
}

int main() {
    triangle(5);

    return 0;
}