n = int(input())

for _ in range(n):
    lt, wt, le, we = map(int, input().split())

    at = lt * wt
    ae = le * we

    if at > ae:
        print("TelecomParisTech")
    elif at < ae:
        print("Eurecom")
    else:
        print("Tie")
