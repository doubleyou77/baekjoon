N = int(input())

for i in range(N):
  s = list(input().split(' '))
  s.reverse()
  print("Case #" + str(i+1) + ":", end=" ")
  for i in s:
    print(i, end=" ")
  print()