# 1699: 400 - 다이나믹 프로그래밍 1 - 제곱수의 합
n = int(input())
dp = [i for i in range(n+1)] # for문 두 번 돌리지 말고 여기서 초기화까지 하기
for i in range(1,n+1):
    for j in range(1,i):
        if(j*j)>i: # j**2 대신 j*j로 계산해야 함 (시간초과)
            break
        if dp[i] > dp[i - j * j] + 1:
            dp[i] = dp[i - j * j] + 1 # min 함수를 사용하면 시간초과됨
print(dp[n])