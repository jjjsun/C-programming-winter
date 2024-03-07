a,b = map(int,input().split())
c = int(input())
if c>=60:
    num = (b+c)//60
    if a+num >= 24:
        a = a+num-24
    else:
        a += num
    b = (b+c)%60 
else:
    if b+c >=60:
        if a == 23:
            a = 0
        else:
            a += 1
        b = b+c-60
    else:
        b += c
print(a,b)