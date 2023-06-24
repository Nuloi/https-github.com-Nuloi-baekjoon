import sys

M = int(sys.stdin.readline())

S = 0 

for _ in range(M):
    operation = sys.stdin.readline().split()

    if operation[0] == 'add':
        x = int(operation[1])
        S |= (1 << x) 
    elif operation[0] == 'remove':
        x = int(operation[1])
        S &= ~(1 << x) 
    elif operation[0] == 'check':
        x = int(operation[1])
        if S & (1 << x):
            print(1)
        else:
            print(0)
    elif operation[0] == 'toggle':
        x = int(operation[1])
        S ^= (1 << x)
    elif operation[0] == 'all':
        S = (1 << 21) - 1
    elif operation[0] == 'empty':
        S = 0  
