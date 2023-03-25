a=[]
for i in range(7):
    a.append(int(input()))
a.sort()
t=0
low=0
su=0
for i in range(7):
    if(a[i]%2!=0):
        if(t==0):
            low=a[i]
            t=1
        su+=a[i]
if su==0:
    print("-1")
else:
    print(su)
    print(low)
