import sys

sys.setrecursionlimit(100000) 

def dfs(R):
    visited[R] = True
    order[R] = count[0]
    count[0] += 1
    for next_node in graph[R]:
        if not visited[next_node]:
            dfs(next_node)

N, M, R = map(int, input().split())

graph = [[] for _ in range(N+1)]  

for _ in range(M):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u) 

for node in graph:
    node.sort()  
visited = [False] * (N+1)
order = [0] * (N+1)
count = [1]  

dfs(R)

for i in range(1, N+1):
    print(order[i])
