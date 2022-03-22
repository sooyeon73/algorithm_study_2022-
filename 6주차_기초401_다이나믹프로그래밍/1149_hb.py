# 1149: 401 - 다이나믹 프로그래밍 1 연습 - RGB거리
n = int(input())
cost = []
for i in range(n):
    cost.append(list(map(int, input().split())))
dp = [[0]*3 for i in range(n)]
for i in range(3):
    dp[0][i] = cost[0][i]
for i in range(1, n):
    dp[i][0] = min(dp[i-1][1] + cost[i][0], dp[i-1][2] + cost[i][0])
    dp[i][1] = min(dp[i-1][0] + cost[i][1], dp[i-1][2] + cost[i][1])
    dp[i][2] = min(dp[i-1][0] + cost[i][2], dp[i-1][1] + cost[i][2])
print(min(dp[n-1]))