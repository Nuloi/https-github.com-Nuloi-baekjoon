n, m = map(int, input().split())
a = n * (m / 100)
b = n - a
if b >= 100:
    print(0) 
else:
    print(1) 
