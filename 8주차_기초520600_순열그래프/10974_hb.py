# 10974: 520 - 브루트 포스 - 순열 - 모든 순열
n =  int(input())
num = [0]*n
check = [False]*n
def dfs(cnt):
    if cnt == n:
        for i in range(cnt):
            print(num[i], end=' ')
        print()
        return
    for i in range(n):
        if check[i] == False:
            num[cnt] = i+1
            check[i] = True
            dfs(cnt+1)
            check[i] = False
dfs(0)