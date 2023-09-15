import sys

N = int(sys.stdin.readline())
M = int(sys.stdin.readline())
S = sys.stdin.readline().strip()

pattern_len = 2*N + 1 
count = 0
i = 0

while i <= M - pattern_len: 
    if S[i] == 'I':
        valid = True
        for j in range(1, pattern_len):
            if j % 2 == 1 and S[i+j] != 'O':  
                valid = False
                break
            elif j % 2 == 0 and S[i+j] != 'I': 
                valid = False
                break
        if valid:
            count += 1
            i += 2 
        else:
            i += 1
    else:
        i += 1

print(count)