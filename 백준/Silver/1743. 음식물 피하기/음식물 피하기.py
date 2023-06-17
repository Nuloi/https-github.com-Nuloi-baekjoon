import sys

sys.setrecursionlimit(10*6)

N, M, K = map(int, input().split())

corridor = [[0] * M for _ in range(N)]

visited = [[False] * M for _ in range(N)]

for _ in range(K):
    r, c = map(int, input().split())
    corridor[r-1][c-1] = 1
    visited[r-1][c-1] = False

max_size = 0

dr = [-1, 1, 0, 0]
dc = [0, 0, -1, 1]

def dfs(row, col):
    stack = [(row, col)]
    visited[row][col] = True
    size = 1

    while stack:
        curr_row, curr_col = stack.pop()
        
        for i in range(4):
            nr = curr_row + dr[i]
            nc = curr_col + dc[i]
            
            if 0 <= nr < N and 0 <= nc < M and corridor[nr][nc] == 1 and not visited[nr][nc]:
                stack.append((nr, nc))
                visited[nr][nc] = True
                size += 1
    
    return size

for i in range(N):
    for j in range(M):
        if corridor[i][j] == 1 and not visited[i][j]:
            size = dfs(i, j)
            max_size = max(max_size, size)

print(max_size)
