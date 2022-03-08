# 11727: 400 - 다이나믹 프로그래밍 1 - 2xn 타일링 2
n = int(input())
dp = [0]*(n+1) # DP 테이블 초기화

if n == 1: # n이 1이면 dp[1]이 마지막 인덱스이므로 dp[2]가 존재할 수 없기에 따로 처리해줘야 함
    print(1)
else: 
    dp[1] = 1
    dp[2] = 3
    for i in range(3, n+1):
        dp[i] = dp[i-1] + dp[i-2] * 2
    print(dp[n] % 10007)