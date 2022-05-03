# 6603: 520 - 브루트 포스 - 순열 - 로또
def dfs(cnt, start):
    if cnt == 6:
        for i in range(6):
            print(num[i], end = ' ')
        print()
        return
    for i in range(start, k):
        num[cnt] = s[i]
        dfs(cnt+1, i+1)
num = [0]*12
while(1):
    arr = list(map(int, input().split()))
    if arr[0] != 0:
        k = arr[0]
        s = arr[1:]
    else:
        break
    dfs(0, 0)
    print()