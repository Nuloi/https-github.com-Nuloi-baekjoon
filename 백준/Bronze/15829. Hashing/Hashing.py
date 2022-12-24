lan=int(input())
char=input()
plus=0
for i in range(lan):
    plus+=(ord(char[i])-96) * (31 ** i)
print(plus % 1234567891)
