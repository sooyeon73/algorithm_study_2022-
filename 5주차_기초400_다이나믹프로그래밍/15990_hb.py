# 15990: 400 - 다이나믹 프로그래밍 1 - 1,2,3 더하기 5
max = 100000
mod = 1000000009

dp = [[0]*4 for i in range(max+1)]

dp[1] = [0, 1, 0, 0] # 전체 경우의 수(추후 계산), 마지막 숫자가 1인 경우의 수, 마지막 숫자가 2인 경우의 수, 마지막 숫자가 3인 경우의 수
dp[2] = [0, 0, 1, 0]
dp[3] = [0, 1, 1, 1]

for i in range(4, max+1):
    dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % mod
    dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % mod
    dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % mod

t = int(input())
for i in range(t):
    n = int(input())
    print(sum(dp[n]) % mod)