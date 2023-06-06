from collections import deque

def bfs(graph, M, N):
    visited = [[False]*N for _ in range(M)]
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]

    queue = deque()

    for i in range(N): 
        if graph[0][i] == '0':
            queue.append((0, i))
            visited[0][i] = True

    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= M or ny >= N:
                continue
            if graph[nx][ny] == '0' and not visited[nx][ny]:
                queue.append((nx, ny))
                visited[nx][ny] = True

    for i in range(N): 
        if visited[M-1][i] == True:
            return "YES"

    return "NO"

M, N = map(int, input().split())
graph = [list(input().strip()) for _ in range(M)]

print(bfs(graph, M, N))
