# 11057: 401 - 다이나믹 프로그래밍 1 연습 - 오르막 수
n = int(input())
mod = 10007
dp = [[0]*10 for i in range(n+1)]
dp[1] = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
for i in range(2, n+1):
    for j in range(10):
        for l in range(j+1):
            dp[i][j] += dp[i-1][l]
        dp[i][j] %= mod
print(sum(dp[n]) % mod)