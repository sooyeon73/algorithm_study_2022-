# 1182: 540 - 브루트 포스 - 비트마스크 - 부분수열의 합
from itertools import combinations
import sys
N, S = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))
cnt = 0
for i in range(1, N+1):
    comb = combinations(arr, i) # arr에서 i개를 뽑는 조합 nCi
    for j in comb:
        if sum(j) == S: # 조합으로 뽑은 부분수열 튜플의 합이 S와 같다면
            cnt += 1
print(cnt)