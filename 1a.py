import math

n, m, a = input().split()

area = math.ceil(int(n)/int(a))*math.ceil(int(m)/int(a))
print(area)