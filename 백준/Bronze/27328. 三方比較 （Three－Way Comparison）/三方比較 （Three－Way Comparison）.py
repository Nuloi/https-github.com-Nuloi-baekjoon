def compare_numbers(A, B):
    if A < B:
        return -1
    elif A == B:
        return 0
    else:
        return 1

A = int(input())
B = int(input())

result = compare_numbers(A, B)
print(result)
