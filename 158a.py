str = input().split()
n = int(str[0])
k = int(str[1])

total = 0
score = input().split()

for x in range(n):
    if(int(score[x])>=int(score[k-1]) and int(score[x])>0):
        total += 1
print(total)