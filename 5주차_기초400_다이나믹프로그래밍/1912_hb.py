# 1912: 400 - 다이나믹 프로그래밍 1 - 연속합
n = int(input())
arr = list(map(int, input().split()))
dp = [0] * n # arr[i]까지 고려했을 때 최대 연속합
dp[0] = arr[0]
for i in range(1, n):
    dp[i] = max(arr[i], dp[i-1]+arr[i]) # arr[i] 혹은 이전 최대 연속합+arr[i]
print(max(dp))