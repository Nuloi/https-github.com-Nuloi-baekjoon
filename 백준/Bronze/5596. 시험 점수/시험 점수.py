n=list(map(int,input().split()))
m=list(map(int,input().split()))
a=[]
a.append(sum(n))
a.append(sum(m))
a.sort()
print(a[-1])