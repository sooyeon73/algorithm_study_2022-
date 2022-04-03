#include <stdio.h>

int N, M;
int seq[8];

void print() {
    for (int i = 0; i < M; i++)
        printf("%d ", seq[i]);
    printf("\n");
}

void comb(int start, int cnt) {
    if (cnt == M) {
        print(); return;
    }
    for (int i = start; i <= N; i++) {
        seq[cnt] = i;
        comb(i, cnt + 1);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    comb(1, 0);
}
