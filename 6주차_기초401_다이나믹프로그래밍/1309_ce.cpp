#include <stdio.h>

int N, dp[2][100001];

int main(){
    scanf("%d", &N);
    dp[0][1] = 1; dp[1][1] = 2;
    for(int i=2; i<=N; i++){
        dp[0][i] = (dp[0][i-1]+dp[1][i-1])%9901;
        dp[1][i] = (2*dp[0][i-1]+dp[1][i-1])%9901;
    }
    printf("%d", (dp[0][N]+dp[1][N])%9901);
}
