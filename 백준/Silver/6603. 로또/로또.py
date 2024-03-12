from itertools import *

while True:
    k, *lotto = map(int, input().split())
    if k == 0:
        exit(0)
    lotto.sort()

    for combo in combinations(lotto, 6):
        print(*combo)
    
    print()