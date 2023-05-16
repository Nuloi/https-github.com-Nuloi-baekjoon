N = int(input())
seats = [False] * 100
rejected = 0

guests = list(map(int, input().split()))

for seat in guests:
    if seats[seat - 1]:
        rejected += 1
    else:
        seats[seat - 1] = True

print(rejected)
