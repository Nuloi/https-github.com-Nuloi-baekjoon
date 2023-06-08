from collections import deque

def bfs(start, n, m):
    visited = [[False] * m for _ in range(n)]
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    dq = deque([(start[0], start[1], 0)])
    visited[start[0]][start[1]] = True
    while dq:
        x, y, cnt = dq.popleft()
        graph[x][y] = cnt
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= n or ny >= m:
                continue
            if graph[nx][ny] == '1' and not visited[nx][ny]:
                dq.append((nx, ny, cnt + 1))
                visited[nx][ny] = True
    for i in range(n):
        for j in range(m):
            if graph[i][j] == '1' and not visited[i][j]:
                graph[i][j] = -1

n, m = map(int, input().split())
graph = [list(input().split()) for _ in range(n)]
for i in range(n):
    for j in range(m):
        if graph[i][j] == '2':
            start = (i, j)
bfs(start, n, m)

for row in graph:
    print(' '.join(map(str, row)))
