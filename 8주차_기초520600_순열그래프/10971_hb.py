# 10971: 520 - 브루트 포스 - 순열 - 외판원 순회 2
import sys
n = int(input())
num = [0]*n
min_value = sys.maxsize
W = [list(map(int, input().split())) for _ in range(n)]
def dfs(start, next, value, visited):
    global min_value
    if len(visited) == n:
        if W[next][start] != 0: # 마지막으로 방문한 도시에서 처음 도시로 돌아갈 수 있다면
            min_value = min(min_value, value + W[next][start])
        return
    for i in range(n):
        if W[next][i] != 0 and i not in visited and value < min_value:
            visited.append(i)
            dfs(start, i, value + W[next][i], visited)
            visited.pop()
for i in range(n): # i번째 도시에서 시작
    dfs(i, i, 0, [i])
print(min_value)