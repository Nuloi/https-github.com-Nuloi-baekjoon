from collections import defaultdict

def max_sum(N, words):
    dict = defaultdict(int)

    for word in words:
        for i, char in enumerate(word[::-1]):
            dict[char] += 10 ** i

    sort_chars = sorted(dict.keys(), key=lambda x: dict[x], reverse=True)

    char_num = {}

    num = 9
    for char in sort_chars:
        char_num[char] = num
        num -= 1

    total = sum(
        int(''.join(str(char_num[char]) for char in word))
        for word in words
    )


    return total

N = int(input())
words = [input().strip() for _ in range(N)]

print(max_sum(N, words))
