from itertools import permutations

N, M = map(int, input().split())
number = sorted(list(map(int,input().split())))

permu = sorted(list(permutations(number, M)))

for p in permu:
    print(' '.join(map(str, p)))