N = int(input())
text = [input().strip() for _ in range(N)]

rick = [
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop"
]

if any(text not in rick for text in text):
    print("Yes")
else:
    print("No")
