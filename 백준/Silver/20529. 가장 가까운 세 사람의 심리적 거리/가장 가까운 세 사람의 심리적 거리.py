
def count(str1, str2):
    n = 0
    for i in range(4):
        if str1[i] != str2[i]:
            n += 1
    return n

T = int(input())

for _ in range(T):
    N = int(input())

    mbti=list(input().split())
    mini = 100

    if len(mbti) >= 16 ** 3:
        print(0)
        continue
    
    for i in range(N):
        for j in range(i + 1, N):
            for k in range(j + 1, N):
                temp = count(mbti[i], mbti[j]) + count(mbti[j], mbti[k]) + count(mbti[i], mbti[k])
                mini = min(temp, mini)
                if mini==0:
                    break
            if mini==0:
                break
        if mini==0:
            break

    print(mini)
