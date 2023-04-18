from collections import deque

def BFS(a,b,n,m):
    queue = deque([(n, 0)])
    visited = set([n])

    while queue:
        x, time = queue.popleft()

        if x == m:
            return time
        
        for nx in [x-1, x+1, x+a, x-a, x+b, x-b, x*a, x*b]:
            if 0 <= nx <= 100000 and nx not in visited:
                visited.add(nx)
                queue.append((nx, time+1))

a,b,n,m=map(int,input().split())
print(BFS(a,b,n,m))