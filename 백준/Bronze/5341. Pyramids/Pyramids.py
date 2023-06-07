arr=[0]
for i in range(1,101):
    arr.append(arr[i-1]+i)

while True:
    N=int(input())
    if N==0:
        break
    print(arr[N])