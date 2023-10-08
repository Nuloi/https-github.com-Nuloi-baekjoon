def counts(sentence):
    vowels = 'aeiouAEIOU'
    count = 0
    for char in sentence:
        if char in vowels:
            count += 1
    return count

while True:
    line = input()
    if line == '#':
        break
    else:
        vcount = counts(line)
        print(vcount)
