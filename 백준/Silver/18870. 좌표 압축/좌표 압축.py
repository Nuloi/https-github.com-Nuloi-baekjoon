n = int(input())
coords = list(map(int, input().split()))

sorted_coords = sorted(set(coords))
coord_dict = {coord: i for i, coord in enumerate(sorted_coords)}

print(*[coord_dict[coord] for coord in coords])
