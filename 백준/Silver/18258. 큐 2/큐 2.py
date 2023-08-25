import sys
from collections import deque

queue = deque()

N = int(sys.stdin.readline().strip())

for _ in range(N):
    command = sys.stdin.readline().strip().split()
    
    if command[0] == 'push':
        queue.append(int(command[1]))

    elif command[0] == 'pop':
        sys.stdout.write(str(queue.popleft() if queue else -1) + "\n")

    elif command[0] == 'size':
        sys.stdout.write(str(len(queue)) + "\n")

    elif command[0] == 'empty':
        sys.stdout.write(str(0 if queue else 1) + "\n")

    elif command[0] == 'front':
        sys.stdout.write(str(queue[0] if queue else -1) + "\n")
        
    elif command[0] == 'back':
        sys.stdout.write(str(queue[-1] if queue else -1) + "\n")