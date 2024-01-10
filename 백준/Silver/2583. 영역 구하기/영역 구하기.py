import sys
sys.setrecursionlimit(10**8)

M, N, K = map(int, input().split())

visited = [[False] * (N + 1) for _ in range(M + 1)]

for _ in range(K):
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(x1, x2):
        for j in range(y1, y2):
            visited[j][i] = True

stak = []

def dfs(x, y):
    if x < 0 or x >= M or y < 0 or y >= N:
        return 0
    if visited[x][y]:
        return 0
    
    visited[x][y] = True
    cc = 1
    
    cc += dfs(x + 1, y)
    cc += dfs(x - 1, y)
    cc += dfs(x, y + 1)
    cc += dfs(x, y - 1)
    
    return cc

for i in range(M):
    for j in range(N):
        if not visited[i][j]:
            stak.append(dfs(i, j))

stak.sort()

print(len(stak))
print(*stak)
