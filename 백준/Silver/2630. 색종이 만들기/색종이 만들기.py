n = int(input())
paper = [list(map(int, input().split())) for _ in range(n)]

w = 0
b = 0

def cut(x, y, n):
    global b, w
    check = paper[x][y]
    for i in range(x, x + n):
        for j in range(y, y + n):
            if check != paper[i][j]:
                cut(x, y, n//2)
                cut(x, y + n//2, n//2)
                cut(x + n//2, y, n//2)
                cut(x + n//2, y + n//2, n//2)
                return

    if check == 0:
        w += 1
    else:
        b += 1

cut(0, 0, n)
print(w)
print(b)
