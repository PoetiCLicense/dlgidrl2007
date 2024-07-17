int multiplication_table(int x, int y) {
    for (int i=1, i<y+1, i++) {
        for (int j=1, j<x+1, j++) {
            printf("%3d\t", i*j);
        }
        printf("%s\n", "");
    }
    return 0;
}

int main() {
    multiplication_table(5,8);
    return 0;
}