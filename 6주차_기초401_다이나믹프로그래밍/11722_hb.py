# 11722: 401 - 다이나믹 프로그래밍 1 연습 - 가장 긴 감소하는 부분 수열
n = int(input())
arr = list(map(int, input().split()))
dp = [1] * n # dp에는 수열의 길이를 저장하므로 1로 초기화
for i in range(n):
    for j in range(i):
        if arr[i] < arr[j]:
            dp[i] = max(dp[i], dp[j] + 1)
print(max(dp))