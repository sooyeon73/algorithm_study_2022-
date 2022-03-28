# 1748: 500 - 브루트 포스 - 수 이어 쓰기 1
import math, sys
n = int(sys.stdin.readline())
count = 0
for i in range(1, int(math.log10(n)) + 2):
    for j in range (10**(i-1), 10**i):
        count += i
        if j >= n: 
            break
print(count) 