N = int(input())

arr = []

for i in range(0, N):
  n = input()
  arr.append(n)

for i in range(0, len(arr[0])):
  compare = arr[0][i]
  for j in range(1, N):
    if (arr[j][i] != compare):
      compare = '?'

      break
  print(compare, end='')