import sys

is_prime = [True] * 10001
is_prime[0] = is_prime[1] = False
for i in range(2, 101):
    if is_prime[i]:
        for j in range(i * i, 10001, i):
            is_prime[j] = False

def get_goldbach_partition(num):
    min_diff = sys.maxsize
    for p in range(2, num):
        if is_prime[p]:
            if is_prime[num - p]:
                if abs(p - (num - p)) < min_diff:
                    min_diff = abs(p - (num - p))
                    partition = (p, num - p)
    return partition

t = int(input())
for _ in range(t):
    num = int(input())
    partition = get_goldbach_partition(num)
    print(partition[0], partition[1])
