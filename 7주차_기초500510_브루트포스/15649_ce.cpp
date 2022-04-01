#include <stdio.h>

int N, M;
int arr[9];
bool visit[9];

void pick(int cnt) {
    if (cnt > M) {
        for (int i = 1; i <= M; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (!visit[i]) {
            visit[i] = true;
            arr[cnt] = i;
            pick(cnt + 1);
            visit[i] = false;
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);
    pick(1);
}
