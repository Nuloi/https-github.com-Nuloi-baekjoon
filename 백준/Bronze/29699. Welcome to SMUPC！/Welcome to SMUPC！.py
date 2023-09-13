N = int(input())
label = "WelcomeToSMUPC"
position = N % 14
if position == 0:
    print(label[-1]) 
else:
    print(label[position - 1])