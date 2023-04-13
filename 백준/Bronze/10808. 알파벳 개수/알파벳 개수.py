alphabets = [0] * 26


word = input().strip()

for char in word:

    index = ord(char) - ord('a') 

    alphabets[index] += 1 

for count in alphabets:

    print(count, end=' ')

