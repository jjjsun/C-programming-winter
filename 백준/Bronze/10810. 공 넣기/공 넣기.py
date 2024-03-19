n,m = map(int,input().split(" "))
l = [0] * n
for i in range(m):
    i,j,k = map(int,input().split(" "))
    for idx in range(i,j+1):
        l[idx-1]=k
for i in range(n):
    print(l[i],end=' ')