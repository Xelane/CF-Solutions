n = int(input())
total = 0
for x in range(n):
    temp = input()
    a = int(temp[0])
    b = int(temp[2])
    c = int(temp[4])
    if (a+b+c>1):
        total += 1
    a = b = c = 0
print(total)