def make_button(button, buttons):
    for num in str(button):
        if int(num) in buttons:
            return False
    return True

N = int(input())    
M = int(input())
buttons = []
if M > 0:
    buttons = list(map(int, input().split())) 
min_press = abs(N - 100)

for button in range(1000001):
    if make_button(button, buttons):
        press = len(str(button)) + abs(button - N)
        min_press = min(min_press, press)

print(min_press)
