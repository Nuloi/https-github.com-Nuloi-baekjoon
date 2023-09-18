from collections import deque

def operate(n, op):
    if op == 'D':
        return (n * 2) % 10000
    elif op == 'S':
        return n - 1 if n != 0 else 9999
    elif op == 'L':
        return (n % 1000) * 10 + n // 1000
    else:
        return (n % 10) * 1000 + n // 10

def bfs(A, B):
    visited = [False] * 10000
    queue = deque([(A, "")])  
    visited[A] = True

    while queue:
        num, ops = queue.popleft()
        
        if num == B:
            return ops
        
        for op in ['D', 'S', 'L', 'R']:
            next_num = operate(num, op)
            if not visited[next_num]:
                visited[next_num] = True
                queue.append((next_num, ops + op))
T = int(input())
for _ in range(T):
    A, B = map(int, input().split())
    print(bfs(A, B))