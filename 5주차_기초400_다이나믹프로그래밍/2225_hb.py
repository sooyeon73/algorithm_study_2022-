# 2225: 400 - 다이나믹 프로그래밍 1 - 합분해
N, K = map(int, input().split())

d = [[0]*(K+1) for i in range(N+1)] # DP 테이블 초기화, d[N][0] = 0

for i in range(1, N+1):
    d[i][1] = 1 # K=1일때 구하는 경우의 수는 1

for i in range(1, K+1):
    d[0][i] = 1 # N=0일때 구하는 경우의 수는 1
    d[1][i] = i # N=1일때 구하는 경우의 수는 K

for i in range(2, N+1):
    for j in range(2, K+1):
        d[i][j] = d[i][j-1] + d[i-1][j]

print(d[N][K] % 1000000000)