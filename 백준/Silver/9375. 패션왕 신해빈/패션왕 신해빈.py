T = int(input())

for _ in range(T):
    n = int(input())
    dic = {}
    
    for _ in range(n):
        key, value = input().split()
        if value in dic:
            dic[value] += 1
        else:
            dic[value] = 1

    total = 1
    for count in dic.values():
        total *= (count + 1)

    print(total - 1)
