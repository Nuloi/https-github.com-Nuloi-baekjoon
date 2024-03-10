total, diff = map(int, input().split())

team1 = (total + diff) // 2
team2 = total - team1

if team1 < 0 or team2 < 0 or (total + diff) % 2 != 0:
    print(-1)
else:
    if team1 > team2:
        print(team1, team2)
    else:
        print(team2, team1)
