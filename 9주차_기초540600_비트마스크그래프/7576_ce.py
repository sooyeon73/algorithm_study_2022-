from collections import deque

M, N = map(int, input().split())
box = [list(map(int, input().split())) for _ in range(N)]
queue = deque([])
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
res = 0

for i in range(N):
    for j in range(M):
        if box[i][j] == 1:
            queue.append([i, j])

def bfs():
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx, ny = dx[i] + x, dy[i] + y
            if 0 <= nx < N and 0 <= ny < M and box[nx][ny] == 0:
                box[nx][ny] = box[x][y] + 1
                queue.append([nx, ny])

bfs()
for i in box:
    for j in i:
        if j == 0:
            print(-1)
            exit(0)
    res = max(res, max(i))
print(res - 1)
