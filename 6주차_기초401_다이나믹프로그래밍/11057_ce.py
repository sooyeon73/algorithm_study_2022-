n = int(input())
dp = list([[1] * 10])

for i in range(n):
    dp.append(list([0] * 10))

for i in range(1,n+1):
    for j in range(0,10):
        for c in range(j+1):
            dp[i][j] += dp[i-1][c]

print(dp[n][9] % 10007)
