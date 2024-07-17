#include <stdio.h>

int max(int array[], int n) {
    int max = array[0];
    for (int i=1, i<n, i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int main() {
    int a[] = {1,2,3,4,5};
    printf("%d", max(a, 5))

    return 0;
}