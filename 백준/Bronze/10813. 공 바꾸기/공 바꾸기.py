n,m = map(int,input().split(" "))
l = [0] * n
for i in range(n):
    l[i] = i+1
for i in range(m):
    a,b = map(int,input().split(" "))
    c = 0
    c = l[b-1]
    l[b-1] = l[a-1]
    l[a-1] = c
for i in range(n):
    print(l[i],end=' ')