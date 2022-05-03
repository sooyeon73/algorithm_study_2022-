#include <stdio.h>
#include <algorithm>

using namespace std;

int N, M, arr[8], tar[8];

void select(int idx, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            printf("%d ", tar[i]);
        printf("\n");
        return;
    }

    for (int i = idx; i < N; i++) {
        tar[cnt] = arr[i];
        select(i + 1, cnt + 1);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+N);
    select(0, 0);
}
