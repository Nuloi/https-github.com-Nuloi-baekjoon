s = []

for _ in range(5):
    s.append(sum(map(int, input().split())))

w = s.index(max(s)) + 1
sc = max(s)

print(w, sc)
