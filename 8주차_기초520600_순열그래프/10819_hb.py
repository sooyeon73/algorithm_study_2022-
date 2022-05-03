# 10819: 520 - 브루트 포스 - 순열 - 차이를 최대로
n = int(input())
arr = list(map(int, input().split()))
arr.sort()
num = [0]*n
check = [False]*n
sum, max = 0, 0
def dfs(cnt):
    if cnt == n:
        global max, sum
        for i in range(1, n):
            sum += abs(num[i]-num[i-1])
        if sum > max:
            max = sum
        sum = 0
        return
    for i in range(0, n):
        if not check[i]:
            num[cnt] = arr[i]
            check[i] = True
            dfs(cnt + 1)
            check[i] = False
dfs(0)
print(max)