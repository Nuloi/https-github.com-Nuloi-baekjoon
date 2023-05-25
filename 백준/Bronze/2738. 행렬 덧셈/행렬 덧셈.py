n, m = map(int, input().split())

a = []
for _ in range(n):
    row = list(map(int, input().split()))
    a.append(row)

b = []
for _ in range(n):
    row = list(map(int, input().split()))
    b.append(row)

result = [[0] * m for _ in range(n)]
for i in range(n):
    for j in range(m):
        result[i][j] = a[i][j] + b[i][j]

for row in result:
    print(' '.join(map(str, row)))
