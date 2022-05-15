import math

N, T, C, P = map(int, input().split())

d = math.ceil(N/T)-1
print(P*C*d)