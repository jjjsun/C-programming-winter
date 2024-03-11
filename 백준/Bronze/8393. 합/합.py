n = int(input())
k=1
sum=0
while True:
    if k > n:
        break
    else:
        sum += k
    k += 1
print(sum)