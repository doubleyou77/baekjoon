T = int(input())

for _ in range(T):
  N, M = map(int, input().split())
  up = 1
  down = 1
  for i in range(N+1, M+1):
    up *= i
  for i in range(1, M-N+1):
    down *= i

  print(int(up/down))