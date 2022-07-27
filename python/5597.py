i = [0]*31

for j in range(28):
  n = int(input())
  i[n] = 1

for j in range(1, 31):
  if i[j] == 0:
    print(j)