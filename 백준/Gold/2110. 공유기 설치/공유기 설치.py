N, C = map(int, input().split())
houses = [int(input()) for _ in range(N)]
houses.sort()

start = 1
end = houses[-1] - houses[0]
max_distance = 0

while start <= end:
    mid = (start + end) // 2
    count = 1
    current_house = houses[0]
    for house in houses:
        if house - current_house >= mid:
            count += 1
            current_house = house
    
    if count >= C:
        max_distance = mid
        start = mid + 1
    else:
        end = mid - 1

print(max_distance)
