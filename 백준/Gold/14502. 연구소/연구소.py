from collections import deque
import copy

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
result = 0

def Splash_BFS():
    copy_graph = copy.deepcopy(graph)
    queue=deque()

    for i in range(N):
        for j in range(M):
            if copy_graph[i][j] == 2:
                queue.append((i, j))
    
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if (0 <= nx < N) and (0 <= ny < M):
                if copy_graph[nx][ny] == 0:
                    copy_graph[nx][ny] =2
                    queue.append((nx,ny))
    
    count = 0
    for i in range(N):
        for k in range(M):
            if copy_graph[i][k] == 0:
                count += 1

    global result
    result = max(result, count)

def make_wall(count):
    if count == 3:
        Splash_BFS()
        return
    for i in range(N):
        for k in range(M):
            if graph[i][k] == 0:
                graph[i][k] = 1
                make_wall(count+1)
                graph[i][k] = 0

N, M= map(int,input().split())

graph = [list(map(int, input().split())) for _ in range(N)]

make_wall(0)

print(result)