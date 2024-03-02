from itertools import combinations

L, C = map(int, input().split())
characters = input().split()

characters.sort()
passwords = []
vowel = ['a', 'e', 'i', 'o', 'u']

for comb in combinations(characters, L):
        vowel_count = 0
        consonant_count = 0
        password = ''
        for char in comb:
            password += char
            if char in vowel:
                vowel_count += 1
            else:
                consonant_count += 1
        if vowel_count >= 1 and consonant_count >= 2:
            passwords.append(password)

for password in passwords:
    print(password)