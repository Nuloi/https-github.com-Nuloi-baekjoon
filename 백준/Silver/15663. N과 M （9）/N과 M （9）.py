from itertools import *

N, M = map(int,input().split())
colnum=list(map(int,input().split()))

colnum.sort()
data=set(permutations(colnum, M))
list_data = list(data)
list_data.sort()
for d in list_data:
    print(*d)