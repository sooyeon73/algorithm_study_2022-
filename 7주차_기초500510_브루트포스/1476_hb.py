# 1476: 500 - 브루트 포스 - 날짜 계산
E, S, M = map(int, input().split())
i, j, k, count = 1, 1, 1, 1
while(1):
    if i == E and j == S and k == M:
        print(count)
        break
    i += 1; j += 1; k += 1; count += 1
    if i == 16: i = 1
    if j == 29: j = 1
    if k == 20: k = 1