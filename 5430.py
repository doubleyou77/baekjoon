import sys
from collections import deque
T = int(input())

for i in range(T):
  p = sys.stdin.readline().rstrip
  n = int(input())
  arr = deque(sys.stdin.readline().rstrip()[1:-1].split(','))

  if n == 0:
    arr = deque()

  point = 0;  
  for j in p:
    if j == 'R':
      arr.reverse()
    elif j == 'D':
      if arr:
        arr.popleft()
      else:
        print('error')
        point = 1
        break
  if point == 0:
    print('['+','.join(arr)+']')


