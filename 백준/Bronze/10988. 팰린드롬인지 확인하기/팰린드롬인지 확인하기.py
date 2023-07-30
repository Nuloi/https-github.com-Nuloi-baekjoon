f = str(input())
t = 1
for i in range(len(f)//2):
    if f[i] != f[(-1*i)-1]:
        t=0
print(t)