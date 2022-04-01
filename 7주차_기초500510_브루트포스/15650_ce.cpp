#include <stdio.h>

int N, M;
bool pick[9];
int seq[9];

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
        if (!pick[i]) {
            pick[i] = true;
            seq[cnt] = i;
            comb(i + 1, cnt + 1);
            pick[i] = false;
        }
    }
}

int main() {
    scanf("%d%d", &N, &M);
    comb(1, 0);
}
