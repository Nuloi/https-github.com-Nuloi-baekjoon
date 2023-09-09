def judge(N, U, L):
    if N >= 1000 and (U >= 8000 or L >= 260):
        return "Very Good"
    elif N >= 1000:
        return "Good"
    else:
        return "Bad"
    
N,U,L=map(int,input().split())
print(judge(N,U,L))