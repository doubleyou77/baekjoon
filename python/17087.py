def gcd(a, b):
  if b == 0:
    return a
  else:
    return gcd(b, a%b)

N, S = map(int, input().split())

l = list(map(int, input().split()))

l = [abs(x-S) for x in l]
result = l[0]
for i in range(1, N):
  result = gcd(result, l[i])

print(result)