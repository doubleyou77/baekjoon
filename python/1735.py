a1, b1 = map(int, input().split())
a2, b2 = map(int, input().split())

A = a1*b2+a2*b1
B = b1*b2

def GCD(a, b):
  while b != 0:
    tmp = a%b
    a = b
    b = tmp
  return a

result = GCD(A,B)

if result == 1:
  print(A, B)
else:
  print(int(A/result), int(B/result))