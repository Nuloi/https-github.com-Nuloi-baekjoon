import sys
N = int( sys.stdin.readline().rstrip() )
total = 0
for _ in range(N):
    a = int( sys.stdin.readline().rstrip() )
    total+=a
print(total-N+1)