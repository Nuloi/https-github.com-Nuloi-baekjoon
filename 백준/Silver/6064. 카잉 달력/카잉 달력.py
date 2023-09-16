T = int(input())
for _ in range(T):
    M, N, x, y = map(int, input().split())
    
    if x <= M:
        k = x
        while k <= M * N:
            if (k - 1) % N + 1 == y:
                print(k)
                break
            k += M
        else:
            print(-1)
    else:
        print(-1)
