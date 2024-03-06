def check_row(x, a):
    for i in range(9):
        if mat[x][i] == a:
            return False
    return True


def check_col(y, a):
    for i in range(9):
        if mat[i][y] == a:
            return False
    return True


def check_rect(x, y, a):
    nx = x // 3 * 3
    ny = y // 3 * 3
    for i in range(3):
        for j in range(3):
            if mat[i + nx][j + ny] == a:
                return False
    return True


def dfs(idx):
    if idx == len(empty_cells):
        for i in range(9):
            print(*mat[i])
        exit(0)

    x, y = empty_cells[idx]

    for i in range(1, 10):
        if check_row(x, i) and check_col(y, i) and check_rect(x, y, i):
            mat[x][y] = i
            dfs(idx + 1)
            mat[x][y] = 0


mat = [list(map(int, input().split())) for _ in range(9)]

empty_cells = [(i, j) for i in range(9) for j in range(9) if mat[i][j] == 0]

dfs(0)
