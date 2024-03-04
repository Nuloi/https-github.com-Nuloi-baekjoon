N, M = map(int, input().split())
graph = [[] for _ in range(N)]

for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def dfs(graph, visited, start, target, depth):
    if depth == 5:
        return True
    visited[start] = True
    for neighbor in graph[start]:
        if not visited[neighbor]:
            if dfs(graph, visited, neighbor, target, depth + 1):
                return True
    visited[start] = False
    return False


for i in range(N):
    visited = [False] * N
    if dfs(graph, visited, i, i, 1):
        print(1)
        break
else:
    print(0)