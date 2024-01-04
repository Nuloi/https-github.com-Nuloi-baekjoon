T = int(input())
for _ in range(T):
    N = int(input())
    backlen = N % 100
    if (N+1) % backlen == 0:    
        print("Good")
    else:
        print("Bye")