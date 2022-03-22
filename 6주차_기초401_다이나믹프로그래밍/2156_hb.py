# 2156: 401 - 다이나믹 프로그래밍 1 연습 - 포도주 시식
n = int(input())
arr = [0]
for i in range(n):
    arr.append(int(input()))
dp = [0]*(n+1)
dp[1] = arr[1]
if n > 1:
    dp[2] = arr[1] + arr[2]
    for i in range(3, n+1):
        dp[i] = max(dp[i-1], dp[i-2] + arr[i], dp[i-3] + arr[i-1] + arr[i])
print(dp[n])