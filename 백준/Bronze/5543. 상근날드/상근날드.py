buger=[]
wor=[]
for i in range(3):
    b=int(input())
    buger.append(b)
for i in range(2):
    b=int(input())
    wor.append(b)
print(min(buger)+min(wor)-50)