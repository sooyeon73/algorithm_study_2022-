# 1476: 500 - 브루트 포스 - 날짜 계산
E, S, M = map(int, input().split())
year = [[[0]*20 for j in range(29)] for i in range(16)]
max = 15*28*19
i, j, k = 1, 1, 1
for result in range(1, max+1):
    year[i][j][k] = result
    i += 1
    j += 1
    k += 1
    if i == 16:
        i = 1
    if j == 29:
        j = 1
    if k == 20:
        k = 1
    if year[E][S][M] != 0:
        break
print(year[E][S][M])