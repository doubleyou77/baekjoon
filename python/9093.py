T = int(input())

for i in range(T):
  w = list(input().split(" "))
  for j in w:
    print(j[:: -1], end=" ")
  print()
