n = int(input())
sequence = list(map(int, input().split()))

position = 0

for move in sequence:
    position += move

if position > 0:
    print("Right")
elif position < 0:
    print("Left")
else:
    print("Stay")