N, M = map(int, input().split())
o = [input() for _ in range(N)]

r = sum(x.count('O') > M // 2 for x in o)
print(r)
