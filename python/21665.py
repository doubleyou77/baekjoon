n, m = map(int, input().split())

a = []
b = []
for i in range(n):
  str = list(input())
  a.append(str)
check = input()
for i in range(n):
  str = list(input())
  b.append(str)

count = 0
for i in range(len(a)):
  for j in range(len(a[0])):
    if a[i][j] == b[i][j]:
      count += 1
print(count)