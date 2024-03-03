N, M = map(int, input().split())
r, c, d = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(N)]

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

result = 0

def DFS(r, c, d):
    global result
    if graph[r][c] == 0:
        graph[r][c] = 2
        result += 1

    for _ in range(4):
        nd = (d + 3) % 4
        nx = r + dx[nd]
        ny = c + dy[nd]
        if graph[nx][ny] == 0: 
            DFS(nx, ny, nd)
            return 
        d = nd  

    nd = (d + 2) % 4
    nx = r + dx[nd]
    ny = c + dy[nd]
    if graph[nx][ny] != 1: 
        DFS(nx, ny, d)
    else: 
        return

DFS(r, c, d)
print(result)
