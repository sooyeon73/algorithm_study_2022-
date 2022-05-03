# 15655: 510 - 브루트 포스 (N과 M) - N과 M (6)
n, m = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()
num = [0]*8
def backtracking(cnt, start):
    if cnt == m:
        for i in range(cnt):
            print(num[i], end = ' ')
        print()
        return
    for i in range(start, n):
        num[cnt] = arr[i]
        backtracking(cnt+1, i+1)
backtracking(0, 0)