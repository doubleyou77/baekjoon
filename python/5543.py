b1 = int(input())
b2 = int(input())
b3 = int(input())

d1 = int(input())
d2 = int(input())

bmin = b2 if b1>b2 else b1
bmin = b3 if bmin > b3 else bmin

dmin = d2 if d1>d2 else d1

print(bmin+dmin-50)