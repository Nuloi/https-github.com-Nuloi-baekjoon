def dfs(N, M, floor):
    visited = [[False for _ in range(M)] for _ in range(N)]
    planks = 0
    
    for i in range(N):
        for j in range(M):
            if not visited[i][j]:
                if floor[i][j] == '-':
                    planks += 1
                    while j < M and floor[i][j] == '-':
                        visited[i][j] = True
                        j += 1
                elif floor[i][j] == '|':
                    planks += 1
                    k = i
                    while k < N and floor[k][j] == '|':
                        visited[k][j] = True
                        k += 1
    return planks

N, M = map(int, input().split())
floor = [input() for _ in range(N)]
print(dfs(N, M, floor))
