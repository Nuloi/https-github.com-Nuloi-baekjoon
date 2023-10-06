L, P = map(int, input().split())

a = list(map(int, input().split()))

b = [-(L * P) + i for i in a]

print(*b)
