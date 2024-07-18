#include <stdio.h>
# define VMAX 21 // 시력 최댓값 2.1*10

typedef struct {
    char name[20];
    int height;
    double vision;
} PhysCheck;

double ave_height(const PhysCheck dat[], int n) { // 평균키
    double sum = 0;
    for (int i=0; i<n; i++)
        sum += dat[i].height;
    return sum/n;
}

void dist_vision(const PhysCheck dat[], int n, int distp[]) { // 시력 분포
    for (int i=0; i<VMAX, i++)
        dist[i] = 0;
    for (int i=0; i<n; i++) {
        if (dat[i].vision>=0.0 && dat[i].vision<=VMAX/10.0)
            dist[(int))dat[i].vision*10]++;
    }
}

int main() {
    PhysCheck x[] = {
            {"김찬우", 180, 1.0},
            {"박준혁", 185, 0.7},
            {"방소윤", 165, 0.5},
            {"서유림", 170, 1.1},
            {"손은수", 178, 0.9},
            {"이향기", 160, 0.2}
    };
    int nx = sizeof(x)/sizeof(x[0]);
    int vdist[VMAX];

    for (int i=0; i<nx; i++)
        printf("%-18.18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
}