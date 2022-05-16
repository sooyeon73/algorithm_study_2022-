# 4963: 600 - 그래프 1 - 섬의 개수
# 상하좌우 대각선 이동 설정 
dx = [0, 0, -1, 1, 1, -1, -1, 1] 
dy = [1, -1, 0, 0, 1, 1, -1, -1] 

# 정의된 dfs를 가지고 graph를 탐색 
while(True):
    # dfs 정의 
    def dfs(x, y, graph, visited): 
        visited[y][x] = True 
        for i in range(8): 
            nx = x + dx[i] 
            ny = y + dy[i] 
            if 0 <= nx < w and 0 <= ny < h: 
                if visited[ny][nx] == False and graph[ny][nx] == 1: 
                    dfs(nx, ny, graph, visited) 
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break
    graph = [list(map(int, input().split())) for _ in range(h)]
    visited = [list(False for j in range(w)) for i in range(h)]
    cnt = 0 
    for i in range(h): 
        for j in range(w): 
            if graph[i][j] == 1 and visited[i][j] == False: 
                dfs(i, j, graph, visited) 
                cnt += 1
    print(cnt) 