# 14889: 540 - 브루트 포스 - 비트마스크 - 스타트와 링크
from itertools import combinations
import sys
n = int(sys.stdin.readline())
arr = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
num = [i for i in range(n)]
link = []
sum_start, sum_link = 0, 0
min_value = 100000000
comb = list(combinations(num, int(n/2)))
for i in range(len(comb)):
    for j in range(n):
        if j not in comb[i]:
            link.append(j)
    comb_2 = list(combinations(comb[i], 2))
    for k in comb_2:
        sum_start += arr[k[0]][k[1]] + arr[k[1]][k[0]]
    comb_3 = list(combinations(link, 2))
    for l in comb_3:
        sum_link += arr[l[0]][l[1]] + arr[l[1]][l[0]]
    min_value = min(min_value, abs(sum_start - sum_link))
    sum_start, sum_link = 0, 0
    link.clear()
print(min_value)