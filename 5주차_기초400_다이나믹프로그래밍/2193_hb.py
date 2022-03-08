# 2193: 400 - 다이나믹 프로그래밍 1 - 이친수
n = int(input())
dp = [[0]*2 for i in range(n+1)]
if n == 1:
    print(1)
else:
    dp[1] = [0, 1] # 맨 끝자리 수가 0인 경우, 1인 경우 각각의 경우의 수
    dp[2] = [1, 0]
    for i in range(3, n+1):
        dp[i][0] = sum(dp[i-1])
        dp[i][1] = dp[i-1][0]
    print(sum(dp[n]))