A = int(input())
B = int(input())
C = int(input())
D = int(input())

E = int(input())
F = int(input())

min1 = A if A < B else B
min1 = min1 if min1 < C else C
min1 = min1 if min1 < D else D

min2 = E if E < F else F

print(A+B+C+D+E+F-min1-min2)
