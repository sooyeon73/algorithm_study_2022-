# 16194: 400 - 다이나믹 프로그래밍 1 - 카드 구매하기 2
n = int(input())
card = [0]
card += list(map(int, input().split())) # 각 카드팩의 가격

dp = [0]*(n+1) # DP 테이블 초기화
dp[1] = card[1] # 1개 들어있는 카드팩 1개 사는 경우
dp[2] = min(card[1]*2, card[2]) # 1개 들어있는 카드팩 2개 사는 경우, 2개 들어있는 카드팩 1개 사는 경우

for i in range (3, n+1):
    dp[i] = card[i] # i개 들어있는 카드팩 1개 사는 경우
    for j in range (1, i//2 + 1):
        dp[i] = min(dp[i], dp[j] + dp[i-j]) # j개를 사는 최댓값과 i-j개를 사는 최댓값의 합

print(dp[n])