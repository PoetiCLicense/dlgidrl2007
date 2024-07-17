#include <stdio.h>

int sum(int array[], int n) {
    int sum = 0;
    for (int i=0, i<n, i++)
        sum += array[i];
    return sum;
}

int main() {
    int a[] = {1,2,3,4,5};
    printf("%d", sum(a, 5));

    return 0;
}