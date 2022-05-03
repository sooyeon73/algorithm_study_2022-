#include <stdio.h>
#include <algorithm>
using namespace std;

int N, M;
int num[8];
int arr[8];
bool chk[8];

void solve(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < N; i++)
            if (arr[i]) printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!chk[i]) {
            chk[i] = true;
            arr[cnt] = num[i];
            solve(cnt + 1);
            chk[i] = false;
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
        scanf("%d", &num[i]);

    sort(num, num + N);
    solve(0);
}
