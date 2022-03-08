# 11053: 400 - 다이나믹 프로그래밍 1 - 가장 긴 증가하는 부분 수열
n = int(input())
arr = list(map(int, input().split()))
dp = [1] * n # dp[i]에는 arr[i]를 마지막 원소로 갖는 가장 긴 증가하는 부분 수열의 길이를 저장, dp[0] = 1
for i in range(n): # arr[0]~arr[n-1]에 대해 dp[0]~dp[n-1] 계산
    for j in range(i): # dp[i]를 계산하기 위해 arr[i]와 arr[j](0<=j<i)를 비교
        if arr[i] > arr[j]:
            dp[i] = max(dp[i], dp[j]+1)
print(max(dp)) # 전체 arr에 대해 가장 긴 증가하는 부분 수열의 길이 출력