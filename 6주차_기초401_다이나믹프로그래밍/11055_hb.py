# 11055: 401 - 다이나믹 프로그래밍 1 연습 - 가장 큰 증가 부분 수열
n = int(input())
arr = list(map(int, input().split()))
dp = [0] * n
dp[0] = arr[0]
for i in range(n):
    for j in range(i):
        if arr[i] > arr[j]:
            dp[i] = max(dp[i], dp[j] + arr[i])
        else:
            dp[i] = max(dp[i], arr[i])
print(max(dp))