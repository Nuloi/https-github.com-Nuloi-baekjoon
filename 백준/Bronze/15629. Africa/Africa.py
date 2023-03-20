prices = {
    'botswana': 0,
    'ethiopia': 50,
    'kenya': 50,
    'namibia': 140,
    'south-africa': 0,
    'tanzania': 50,
    'zambia': 50,
    'zimbabwe': 30
}

n = int(input())

total_cost = 0
goinglist = []
gg = 0

for i in range(n):
    country = input()
    total_cost += prices[country]
    
    if country == 'south-africa':
        gg = 1
    if gg == 1 and country == 'namibia':
        total_cost -= 100
    
    if i > 0 and goinglist[-1] in ['zambia', 'zimbabwe'] and country in ['zambia', 'zimbabwe']:
        total_cost -= 30
    
    goinglist.append(country)
    
print(total_cost)
