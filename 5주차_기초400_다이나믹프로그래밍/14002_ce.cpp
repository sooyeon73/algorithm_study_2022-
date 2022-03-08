#include <stdio.h>

int N, ans, ans_idx, arr[1000], dp[1000][2], res[1001];

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < N; i++) {
        int max = 1, idx = i;
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && dp[j][0] >= max) {
                max = dp[j][0] + 1;
                idx = j;
            }
        }
        dp[i][0] = max;
        dp[i][1] = idx;

        if (ans < max) {
            ans = max; ans_idx = i;
        }
    }

    int ans = dp[ans_idx][0], tmp = ans_idx;
    for (int i = ans; i > 0; i--) {
        res[i] = arr[tmp];
        tmp = dp[tmp][1];
    }

    printf("%d\n", ans);
    for (int i = 1; i <= ans; i++)
        printf("%d ", res[i]);
}
