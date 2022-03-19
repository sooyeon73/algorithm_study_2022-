# 15988: 401 - 다이나믹 프로그래밍 1 연습 - 1,2,3 더하기 3
max = 1000000
mod = 1000000009
t = int(input())
n = [0]*t
for i in range(t):
    n[i] = int(input())

dp = [0]*(max+1) # DP 테이블 초기화
dp[1] = 1
dp[2] = 2
dp[3] = 4

for i in range(4, max+1):
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
    dp[i] %= mod

for i in range(t):
    print(dp[n[i]])