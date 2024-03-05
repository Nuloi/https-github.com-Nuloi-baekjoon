def find_root(x):
    while roots[x] != x:
        roots[x] = roots[roots[x]]  # 경로 압축
        x = roots[x]
    return x

def union_sets(a, b):
    a_root = find_root(a)
    b_root = find_root(b)
    if a_root < b_root:
        roots[b_root] = a_root
    else:
        roots[a_root] = b_root

n, m = map(int, input().split())
roots = [0] * (n+1)
for i in range(1, n+1):
    roots[i] = i

for _ in range(m):
    operation, a, b = map(int, input().split())
    if operation == 0:
        union_sets(a, b)
    else:
        if find_root(a) == find_root(b):
            print("YES")
        else:
            print("NO")
