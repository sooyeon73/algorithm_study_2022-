# 1309: 401 - 다이나믹 프로그래밍 1 연습 - 동물원
n = int(input())
mod = 9901
dp = [[0] * 3 for i in range(n+1)]
dp[1] = [1, 1, 1] # 한 마리도 배치하지 않은 경우, 왼쪽에 한 마리 배치한 경우, 오른쪽에 한 마리 배치한 경우
for i in range(2, n+1):
    dp[i][0] = sum(dp[i-1]) % mod
    dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % mod
    dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % mod
print(sum(dp[n])% mod)