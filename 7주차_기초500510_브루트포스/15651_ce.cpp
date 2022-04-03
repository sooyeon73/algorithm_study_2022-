#include <stdio.h>

int N, M, arr[8];

void solve(int depth) {
    if (depth == M) {
        for (int i = 0; i < M; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for (int i = 1; i <= N; i++) {
        arr[depth] = i;
        solve(depth + 1);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    solve(0);
}
