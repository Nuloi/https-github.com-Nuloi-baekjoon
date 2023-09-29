n = int(input())

Luck_7 = '7' in str(n)

Luck_by_7 = n % 7 == 0

if Luck_7 and Luck_by_7:
    print(3)
elif Luck_7 and not Luck_by_7:
    print(2)
elif not Luck_7 and Luck_by_7:
    print(1)
else:
    print(0)
