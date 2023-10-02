n = int(input())

num = list(map(int, input().split()))
a = 0 
b = 0 

for i in num:
    if i % 2 == 0:
        a += 1
    else:
        b += 1

if a > b:
    print("Happy")
else:
    print("Sad")
