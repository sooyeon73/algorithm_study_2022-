# 2133: 401 - 다이나믹 프로그래밍 1 연습 - 타일 채우기
n = int(input())
dp = [0] * 31 # dp[1] = 0
dp[0] = 1
dp[2] = 3
for i in range(4, 31, 2): # 4부터 30까지의 짝수
    dp[i] = dp[i-2] * 3
    for j in range(4, i+1, 2): # 4부터 i까지의 짝수
        dp[i] += dp[i-j] * 2
print(dp[n])