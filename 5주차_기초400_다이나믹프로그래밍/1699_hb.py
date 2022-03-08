# 1699: 400 - 다이나믹 프로그래밍 1 - 제곱수의 합
n = int(input())
dp = [0 for _ in range(n+1)]
for i in range(1,n+1):
    dp[i] = i
    for j in range(1,i):
        if(j**2)>i:
            break
        dp[i] = min(dp[i], dp[i-j**2]+1)
print(dp[n])