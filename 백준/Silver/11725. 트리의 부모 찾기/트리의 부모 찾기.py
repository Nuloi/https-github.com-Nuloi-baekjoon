from collections import deque

N = int(input())

tree = [[] for _ in range(N + 1)]

for _ in range(N - 1):
    a, b = map(int, input().split())
    tree[a].append(b)
    tree[b].append(a)

parents = [0] * (N + 1)

dq = deque([(1, 0)])

while dq:
    current, parent = dq.popleft()
    parents[current] = parent
    for child in tree[current]:
        if child != parent:
            dq.append((child, current))

for i in range(2, N + 1):
    print(parents[i])
