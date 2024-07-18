#include <stdio.h>

void prime_number(int n) {
    unsigned long counter = 0;
    for (n=2; n<=1000; n++) {
        int i;
        for (i=2; i<n; i++) {
            counter++;
            if (n%i == 0)
                break;
        }
        if (i==n)
            printf("%d\n", n);
        else printf("%d\n", -1);
    }
    printf("나눗셈을 실행한 횟수", "%lu\n", counter);
}

int main() {
    prime_number(8);
    prime_number(7);

    return 0;
}