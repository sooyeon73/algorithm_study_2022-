# 11054: 401 - 다이나믹 프로그래밍 1 연습 - 가장 긴 바이토닉 부분 수열
n = int(input())
arr = list(map(int, input().split()))
dp = [[1]*n for i in range(3)]
for i in range(n):
    for j in range(i): 
        if arr[i] > arr[j]: # 증가하는 부분 수열
            dp[0][i] = max(dp[0][i], dp[0][j] + 1)
for i in range(n-1, -1, -1):
    for j in range(n-1, i, -1):
        if arr[i] > arr[j]: # 감소하는 부분 수열
            dp[1][i] = max(dp[1][i], dp[1][j] + 1)
    dp[2][i] = dp[0][i] + dp[1][i] - 1
print(max(dp[2]))