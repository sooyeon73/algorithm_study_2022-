#include <stdio.h>

int T, n;
long long dp[100001][4];

void set() {
    dp[1][1] = 1; dp[1][0] = 1;
    dp[2][2] = 1, dp[2][0] = 1;
    dp[3][1] = 1, dp[3][2] = 1, dp[3][3] = 1, dp[3][0] = 3;
    for (int i = 4; i < 100001; i++) {
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
        for (int j = 1; j < 4; j++)
            dp[i][0] += dp[i][j];
    }
}

int main() {
    scanf("%d", &T);
    set();
    while (T--) {
        scanf("%d", &n);
        printf("%lld\n", dp[n][0] % 1000000009);
    }
}
