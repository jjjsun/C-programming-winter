n = int(input())
if n%4==0:
    num = n//4
    for i in range(num):
        print("long", end=" ")
else:
    num = n//4 + 1
    for i in range(num):
        print("long", end=" ")
print("int")