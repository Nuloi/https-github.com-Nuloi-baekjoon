from collections import deque

dx = [-1, -2, -2, -1, 1, 2, 2, 1]
dy = [-2, -1, 1, 2, 2, 1, -1, -2]

def bfs(l, start, end):
    knight = deque([(start, 0)])  
    visited = set([start])

    while knight:
        (x, y), moves = knight.popleft()

        if (x, y) == end:
            return moves

        for i in range(8):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < l and 0 <= ny < l and (nx, ny) not in visited:
                visited.add((nx, ny))
                knight.append(((nx, ny), moves+1))

    return -1  

testcase = int(input())

for _ in range(testcase):
    l = int(input())
    start = tuple(map(int, input().split()))
    end = tuple(map(int, input().split()))
    print(bfs(l, start, end))
