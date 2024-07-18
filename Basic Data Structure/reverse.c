#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t=x; x=y; y=t; } while(0) // type형 x,y 교환

void ary_reverse(int array[], int n) {
    for (int i=0; i<n/2; i++)
        swap(int, array[i], array[n-i-1]);
}

int main() {
    int a[] = {1,2,3,4,5};
    for (int i=0; i<sizeof(a); i++)
        printf("%d\t", a[i]);
    ary_reverse(a, 5);
    for (int i=0; i<sizeof(a); i++)
        printf("%d\t", a[i]);
}