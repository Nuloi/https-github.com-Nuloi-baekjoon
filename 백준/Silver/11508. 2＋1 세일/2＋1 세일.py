N=int(input())
C = [int(input()) for _ in range(N)]
C.sort(reverse=1)
set_count = N // 3
discount=[]
i=2
for _ in range(set_count):
    discount.append(C[i])
    i+=3
print(sum(C)-sum(discount))