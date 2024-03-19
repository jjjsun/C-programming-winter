n = int(input())
max = -1000000
min = 1000000
l = list(map(int, input().split()))
for i in range(n):
    if l[i]>max:
        max = l[i]
for i in range(n):
    if l[i]<min:
        min = l[i]
print(min,max)