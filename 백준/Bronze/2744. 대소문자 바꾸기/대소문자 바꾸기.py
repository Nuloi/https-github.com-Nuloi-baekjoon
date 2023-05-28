word = input()

result = ''

for char in word:
    if char.islower():
        result += char.upper()
    else:
        result += char.lower()

print(result)
