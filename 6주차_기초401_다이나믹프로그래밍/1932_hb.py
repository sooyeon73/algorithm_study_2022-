# 1932: 401 - 다이나믹 프로그래밍 1 연습 - 정수 삼각형
n = int(input())
arr = [0]
for i in range(n):
    arr.append(list(map(int, input().split())))
dp = [[0] * (n+1) for i in range(n+1)]
dp[1][1] = arr[1][0]
for i in range(2, n+1):
    dp[i][1] = dp[i-1][1] + arr[i][0]
    dp[i][i] = dp[i-1][i-1] + arr[i][i-1]
    for j in range(2, i):
        dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + arr[i][j-1]
print(max(dp[n]))